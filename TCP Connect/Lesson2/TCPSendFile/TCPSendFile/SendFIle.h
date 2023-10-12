#pragma once

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QString>
#include <QFile>
#include <QFileInfo>

//qthread�Ĺ�������Ҫ�̳�qobject
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
	//���̵߳Ĺ������еĹ�������������Ϊpublic
	// ����ĺ�����������֮�������������
	//���ܸ����������źţ���ʼͨ��
	void SlotStartConnect(QString ip, unsigned short port);
	//�����ļ�
	void SlotSendFile(QString path);

	void SlotSuccess();

	void SlotDisconnect();

signals:
	void SignalisConnectSuccess(bool isSuccess);
	void SignalCurrPercent(int CurrPercent);

private:
	QTcpSocket* m_pTcpSocket;
};
