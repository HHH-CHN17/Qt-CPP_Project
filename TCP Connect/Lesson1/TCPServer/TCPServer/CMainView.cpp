#include "CMainView.h"

MainView::MainView(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

	InitData();
	InitView();
	InitConnect();
}

void MainView::InitData()
{
	m_pTcpServer = new QTcpServer(this);
	m_pTcpSocket = new QTcpSocket(this);
}

void MainView::InitView()
{
	//端口初始化
	ui.port->setText("8000");
	setWindowTitle("服务器");
}

void MainView::InitConnect()
{
	//尝试用lamuda表达式写
	// 
	// connect解释：connect操作相当于在Qt框架中注册了一个回调函数，只有当信号发生时，槽函数才会被调用
	// 注意：当进行connect连接的时候，发射信号的对象必须为一个有效对象！！！！！
	// 意思就是发射信号的对象必须经过实例化，不能为NULL的时候去使用connect
	// 
	// 回调函数：看b站视频//https://blog.csdn.net/zhoupian/article/details/119495949
	// 
	//点击启动时设置监听
	connect(ui.setListen, &QPushButton::clicked, this, &MainView::SlotOpenServer);
	//点击发送时复制文本至record，调用socket->write()，并清空发送消息栏
	connect(ui.sendMessage, &QPushButton::clicked, this, &MainView::SlotSendMessage);
	//有新连接时获取客户端socket，建立连接
	connect(m_pTcpServer, &QTcpServer::newConnection, this, &MainView::SlotGetSocket);
	//注意这里的disconnected信号是由对面客户端发出的，不是由服务端发出的
	connect(m_pTcpSocket, &QTcpSocket::disconnected, this, &MainView::SlotCLoseSocket);
}


MainView::~MainView()
{

}

void MainView::SlotOpenServer()
{
	if (!m_pTcpServer)
	{
		return;
	}

	unsigned short port = ui.port->text().toUShort();
	m_pTcpServer->listen(QHostAddress::Any,port);
	ui.setListen->setEnabled(false);
	ui.record->append("连接中……");
}

void MainView::SlotSendMessage()
{
	//以纯文本的形式将textedit中文本复制到str中
	//除了toplaintext外，还可以显示html格式的字符串
	QString str = ui.message->toPlainText();
	ui.record->append("服务器说：" + str);
	
	//发送数据时要将qstring转换成utf8格式，
	m_pTcpSocket->write(str.toUtf8());

	ui.message->clear();
}

void MainView::SlotGetSocket()
{
	m_pTcpSocket = m_pTcpServer->nextPendingConnection();
	ui.record->append("连接已建立");
	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &MainView::SlotGetMessage);
}

void MainView::SlotGetMessage()
{
	//QByteArray与const char*类似，但更方便
	QByteArray ByteArray = m_pTcpSocket->readAll();
	ui.record->append("客户端说：" + ByteArray);
}

void MainView::SlotCLoseSocket()
{
	m_pTcpSocket->close();
	m_pTcpSocket->deleteLater();
}