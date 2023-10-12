#pragma once

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QString>
#include <QFile>
#include <QFileInfo>

//qthread的工作类需要继承qobject
class SendFIle  : public QObject
{
	Q_OBJECT

public:
	SendFIle(QObject *parent);
	~SendFIle();

private:
	void InitData();
	void InitView();
	void InitConnect();

public slots:
	//子线程的工作类中的工作函数必须设为public
	// 其余的函数名，参数之类可以自由设置
	//接受父对象传来的信号，开始通信
	void SlotStartConnect(QString ip, unsigned short port);
	//发送文件
	void SlotSendFile(QString path);

	void SlotSuccess();

	void SlotDisconnect();

signals:
	void SignalisConnectSuccess(bool isSuccess);
	void SignalCurrPercent(int CurrPercent);

private:
	QTcpSocket* m_pTcpSocket;
};
