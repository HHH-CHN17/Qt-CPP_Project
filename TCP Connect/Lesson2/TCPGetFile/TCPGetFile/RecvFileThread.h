#pragma once

#include <QThread>
#include <QTcpSocket>
#include <QFile>

class RecvFileThread  : public QThread
{
	Q_OBJECT

public:
	RecvFileThread(QTcpSocket* TcpSocket, QObject *parent);
	~RecvFileThread();

protected:
	void run()override;

private slots:
	void SlotGetFile();

signals:
	void SignalGetSuccess();

private:
	QTcpSocket* m_pTcpSocket;
	QFile* file;
};
