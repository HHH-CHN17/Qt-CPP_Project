#include "QtProject_LP.h"

QtProject_LP::QtProject_LP(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    InitData();
    InitView();
    InitConnect();

    SlotLanguageChange(0);
}

void QtProject_LP::InitData()
{
    m_pTaranslator = NULL;
}
void QtProject_LP::InitView()
{
    InitCommbox();
    UpdateUi();
}
void QtProject_LP::InitConnect()
{
    //https://blog.csdn.net/Bing_Lee/article/details/97810100
    //建议使用QT4格式
    connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(SlotLanguageChange(int)));

}

void QtProject_LP::UpdateUi()
{
    ui.label->setText(tr("This is first label"));
    ui.label_2->setText(tr("This is second label"));

    ArabicAdapter();
}

void QtProject_LP::ArabicAdapter()
{
    //this->setLayoutDirection(Qt::RightToLeft);
}

void QtProject_LP::InitCommbox()
{
    ui.comboBox->addItem("中文");
    ui.comboBox->addItem("English");

    ui.comboBox->setView(new QListView());
    ui.comboBox->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    ui.comboBox->view()->window()->setAttribute(Qt::WA_TranslucentBackground);
    
}

void QtProject_LP::paintEvent(QPaintEvent*)
{
    
}

void QtProject_LP::SlotLanguageChange(int index)
{
    if (!m_pTaranslator)
    {
        m_pTaranslator = new QTranslator(this);
    }

    switch (index)
    {
    case 0:
    {
        m_pTaranslator->load(":/Chinese_zh.qm");
        break;
    }
    case 1:
    {
        m_pTaranslator->load(":/English_en.qm");
        break;
    }
    default:
        break;
    }
    qApp->installTranslator(m_pTaranslator);
}

void QtProject_LP::changeEvent(QEvent* e)
{
    switch (e->type())
    {
    case QEvent::LanguageChange: 
    {
        UpdateUi();
        //ui.retranslateUi(this);
    }
    default:
        break;
    }
}