#include "NetWorkTest.h"
#include <QDebug>


NetWorkTest::NetWorkTest(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    InitData();
    InitView();
    InitConnect();
}

NetWorkTest::~NetWorkTest()
{}

void NetWorkTest::InitData()
{
    m_pCustomDialog = NULL;
    GetHostInfomation();
}
void NetWorkTest::InitView()
{

}
void NetWorkTest::InitConnect()
{
    connect(ui.DetailBtn, &QPushButton::clicked, this, &NetWorkTest::SlotHostDetail);
}

void NetWorkTest::GetHostInfomation()
{
    QString strHost = QHostInfo::localHostName();
    ui.hostInfo->setText(strHost);

    QHostInfo hostinfo = QHostInfo::fromName(strHost);
    QList<QHostAddress> listAddr = hostinfo.addresses();
    if (!listAddr.isEmpty())
    {
        QString str = listAddr.at(0).toString();
	    ui.IPaddr->setText(str);
        qDebug() << hostinfo.hostName();
        qDebug() << "IP num: " << listAddr.size();
    }

}

void NetWorkTest::SlotHostDetail()
{
    QString strDetail = QString();
    QList<QNetworkInterface> listInterface = QNetworkInterface::allInterfaces();

    for (const auto& listElemInterface : listInterface)
    {
        strDetail += tr("Device: ") + listElemInterface.name() + "\n";
        strDetail += tr("HardWare Address: ") + listElemInterface.hardwareAddress() + "\n";

        QList<QNetworkAddressEntry> entryList = listElemInterface.addressEntries();
        for (const auto& listElemEntry : entryList)
        {
            strDetail += "\t" + tr("IP地址：") + listElemEntry.ip().toString() + "\n";
            strDetail += "\t" + tr("子网掩码：") + listElemEntry.netmask().toString() + "\n";
            strDetail += "\t" + tr("广播地址:") + listElemEntry.broadcast().toString() + "\n";
        }
    }
    //QMessageBox::information(this, tr("Detail"), strDetail);

    if (!m_pCustomDialog)
    {
        m_pCustomDialog =    new CustomDialog(this);
        m_pCustomDialog->SetDialogText(strDetail);
        m_pCustomDialog->exec();
    }
}