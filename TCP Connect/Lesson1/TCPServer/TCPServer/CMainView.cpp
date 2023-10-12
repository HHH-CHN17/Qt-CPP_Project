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
	//�˿ڳ�ʼ��
	ui.port->setText("8000");
	setWindowTitle("������");
}

void MainView::InitConnect()
{
	//������lamuda���ʽд
	// 
	// connect���ͣ�connect�����൱����Qt�����ע����һ���ص�������ֻ�е��źŷ���ʱ���ۺ����Żᱻ����
	// ע�⣺������connect���ӵ�ʱ�򣬷����źŵĶ������Ϊһ����Ч���󣡣�������
	// ��˼���Ƿ����źŵĶ�����뾭��ʵ����������ΪNULL��ʱ��ȥʹ��connect
	// 
	// �ص���������bվ��Ƶ//https://blog.csdn.net/zhoupian/article/details/119495949
	// 
	//�������ʱ���ü���
	connect(ui.setListen, &QPushButton::clicked, this, &MainView::SlotOpenServer);
	//�������ʱ�����ı���record������socket->write()������շ�����Ϣ��
	connect(ui.sendMessage, &QPushButton::clicked, this, &MainView::SlotSendMessage);
	//��������ʱ��ȡ�ͻ���socket����������
	connect(m_pTcpServer, &QTcpServer::newConnection, this, &MainView::SlotGetSocket);
	//ע�������disconnected�ź����ɶ���ͻ��˷����ģ������ɷ���˷�����
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
	ui.record->append("�����С���");
}

void MainView::SlotSendMessage()
{
	//�Դ��ı�����ʽ��textedit���ı����Ƶ�str��
	//����toplaintext�⣬��������ʾhtml��ʽ���ַ���
	QString str = ui.message->toPlainText();
	ui.record->append("������˵��" + str);
	
	//��������ʱҪ��qstringת����utf8��ʽ��
	m_pTcpSocket->write(str.toUtf8());

	ui.message->clear();
}

void MainView::SlotGetSocket()
{
	m_pTcpSocket = m_pTcpServer->nextPendingConnection();
	ui.record->append("�����ѽ���");
	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &MainView::SlotGetMessage);
}

void MainView::SlotGetMessage()
{
	//QByteArray��const char*���ƣ���������
	QByteArray ByteArray = m_pTcpSocket->readAll();
	ui.record->append("�ͻ���˵��" + ByteArray);
}

void MainView::SlotCLoseSocket()
{
	m_pTcpSocket->close();
	m_pTcpSocket->deleteLater();
}