#include "QtProject_LP.h"

QtProject_LP::QtProject_LP(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void QtProject_LP::paintEvent(QPaintEvent*)
{
    QPainterPath path;
    path.setFillRule(Qt::WindingFill);
    path.addRect(10, 10, this->width() - 20, this->height() - 20);
    
    QPainter paint(this);
    paint.fillPath(path, QBrush(Qt::red));

    QPen pen;
    pen.setColor("#ffffff");
}