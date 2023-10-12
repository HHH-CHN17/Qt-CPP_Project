#include "MainView.h"

CMainView::CMainView(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

	InitData();
	InitView();
	InitConnect();
}

CMainView::~CMainView()
{}

void CMainView::InitData()
{
    //创建子线程和子线程工作类
    //并通过工作类的movetothread将该对象移动到子线程中
    m_pThread = new QThread;
    //注意：工作类对象不能指定父对象！
    //但此处不指定父对象会发生“不存在默认构造函数”的错误
    //原因是因为在工作类的重载拷贝构造函数中没有给parent设定默认值
    // 而C++中在重载了拷贝构造函数后，编译器默认不提供无参，有参构造函数，
    //所以我在使用new SendFIle;时，编译器显然不会调用默认构造函数
    // 但又因为拷贝构造函数没有默认值，导致不会调用拷贝构造，最终无构造可用导致编译错误
    m_pSendFile = new SendFIle(nullptr);
    //此时，工作函数在执行的时候就会在子线程里面执行了
    m_pSendFile->moveToThread(m_pThread);
    //经历以上三行代码之后，子线程只是完成了初始化，但并未启动
    //如想要启动子线程还需要调用start函数，这样子线程才会开始执行
    
}
void CMainView::InitView()
{
    ui.PortText->setText("8000");
    ui.IPText->setText("127.0.0.1");
    //设置progressbar的范围和初始值
    ui.progressBar->setRange(0, 100);
    ui.progressBar->setValue(0);
}
void CMainView::InitConnect()
{
    connect(ui.SelectPathBtn, &QPushButton::clicked, this, &CMainView::SlotSelectPath);

    connect(ui.ConnectSeverBtn, &QPushButton::clicked, this, &CMainView::SlotStartServer);
    connect(this, &CMainView::SignalStartSever, m_pSendFile, &SendFIle::SlotStartConnect);

    connect(ui.SendMessageBtn, &QPushButton::clicked, this, &CMainView::SlotSendMessage);
    connect(this, &CMainView::SignalSendMessage, m_pSendFile, &SendFIle::SlotSendFile);

    connect(m_pSendFile, &SendFIle::SignalisConnectSuccess, this, &CMainView::SlotConnectStatus);

    connect(m_pSendFile, &SendFIle::SignalCurrPercent, this, &CMainView::SlotChangeprogress);
}

void CMainView::SlotStartServer()
{
    QString strIP = ui.IPText->text();
    unsigned short port = ui.PortText->text().toUShort();
    //后台处理相关函数应该由工作类对象执行
    emit SignalStartSever(strIP, port);

    //注意线程启动时间应该是在按下开启服务按钮之后
    m_pThread->start();

}

void CMainView::SlotSelectPath()
{
    //该静态方法可以直接选择选择文件路径并返回该文件路径的绝对值
    //详情：https://blog.csdn.net/xdw_it/article/details/80283036
    QString strPath = QFileDialog::getOpenFileName();
    ui.FilePath->setText(strPath);
}

void CMainView::SlotSendMessage()
{
    QString strPath = ui.FilePath->text();

    emit SignalSendMessage(strPath);
}

void CMainView::SlotConnectStatus(bool isSuccess)
{
    if (isSuccess)
    {
        //QMessageBox用法：http://c.biancheng.net/view/9421.html
        QMessageBox::information(this, "status", "success");
    }
    else
    {
        QMessageBox::information(this, "status", "disconnect");
        //在线程结束之后要及时关闭线程，释放资源
        //也就是说，在线程的start()和exit()/quit()都由程序员手动操作
        //exit()与quit()的区别是exit有returnCode
        m_pThread->quit();
        m_pThread->wait();
        //关闭进程之后还要主动delete，建议调用deleteLater()，相关知识如下：
        //https://blog.csdn.net/kangkanglhb88008/article/details/127562366
        m_pThread->deleteLater();
        m_pSendFile->deleteLater();
    }
}

void CMainView::SlotChangeprogress(int currpercent)
{
    ui.progressBar->setValue(currpercent);
}