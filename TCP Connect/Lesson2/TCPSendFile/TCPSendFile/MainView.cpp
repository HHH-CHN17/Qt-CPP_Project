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
    //�������̺߳����̹߳�����
    //��ͨ���������movetothread���ö����ƶ������߳���
    m_pThread = new QThread;
    //ע�⣺�����������ָ��������
    //���˴���ָ��������ᷢ����������Ĭ�Ϲ��캯�����Ĵ���
    //ԭ������Ϊ�ڹ���������ؿ������캯����û�и�parent�趨Ĭ��ֵ
    // ��C++���������˿������캯���󣬱�����Ĭ�ϲ��ṩ�޲Σ��вι��캯����
    //��������ʹ��new SendFIle;ʱ����������Ȼ�������Ĭ�Ϲ��캯��
    // ������Ϊ�������캯��û��Ĭ��ֵ�����²�����ÿ������죬�����޹�����õ��±������
    m_pSendFile = new SendFIle(nullptr);
    //��ʱ������������ִ�е�ʱ��ͻ������߳�����ִ����
    m_pSendFile->moveToThread(m_pThread);
    //�����������д���֮�����߳�ֻ������˳�ʼ��������δ����
    //����Ҫ�������̻߳���Ҫ����start�������������̲߳ŻῪʼִ��
    
}
void CMainView::InitView()
{
    ui.PortText->setText("8000");
    ui.IPText->setText("127.0.0.1");
    //����progressbar�ķ�Χ�ͳ�ʼֵ
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
    //��̨������غ���Ӧ���ɹ��������ִ��
    emit SignalStartSever(strIP, port);

    //ע���߳�����ʱ��Ӧ�����ڰ��¿�������ť֮��
    m_pThread->start();

}

void CMainView::SlotSelectPath()
{
    //�þ�̬��������ֱ��ѡ��ѡ���ļ�·�������ظ��ļ�·���ľ���ֵ
    //���飺https://blog.csdn.net/xdw_it/article/details/80283036
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
        //QMessageBox�÷���http://c.biancheng.net/view/9421.html
        QMessageBox::information(this, "status", "success");
    }
    else
    {
        QMessageBox::information(this, "status", "disconnect");
        //���߳̽���֮��Ҫ��ʱ�ر��̣߳��ͷ���Դ
        //Ҳ����˵�����̵߳�start()��exit()/quit()���ɳ���Ա�ֶ�����
        //exit()��quit()��������exit��returnCode
        m_pThread->quit();
        m_pThread->wait();
        //�رս���֮��Ҫ����delete���������deleteLater()�����֪ʶ���£�
        //https://blog.csdn.net/kangkanglhb88008/article/details/127562366
        m_pThread->deleteLater();
        m_pSendFile->deleteLater();
    }
}

void CMainView::SlotChangeprogress(int currpercent)
{
    ui.progressBar->setValue(currpercent);
}