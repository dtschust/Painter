/* Drew Schuster*/
#include "drawwidget.h"
#include "ui_drawwidget.h"
#include <QtGui>

DrawWidget::DrawWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawWidget)
{
    setAttribute(Qt::WA_StaticContents);
    ui->setupUi(this);
    image = QImage(400,400,QImage::Format_ARGB32_Premultiplied);
    image.fill(qRgb(255,255,255));
}


void DrawWidget::paintEvent(QPaintEvent * event)
{
    QPainter painter(this);
    painter.drawImage(0,0,image);
    if (color.compare("Blue") == 0)
    {
      painter.setBrush(Qt::blue);
      painter.setPen(Qt::blue);
    }
    else if (color.compare("Green")==0)
    {
      painter.setBrush(Qt::green);
      painter.setPen(Qt::green);
    }

    else
    {
      painter.setBrush(Qt::red);
      painter.setPen(Qt::red);
    }
    if (x > 0 && y > 0)
    {
        if (shape.compare("Circle")==0)
          painter.drawEllipse(x-30,y-30,60,60);
        else if (shape.compare("Square")==0)
            painter.drawRect(x-30,y-30,60,60);
        else
        {
            QPointF points[3] = {
                 QPointF(x-30,y+34),
                 QPointF(x+30, y+34),
                 QPointF(x,y-34)
             };
            painter.drawPolygon(points,3);

        }
    }
}

void DrawWidget::leaveEvent ( QEvent * event )
{
    this->updateCoord(-1,-1);
    update();
}

void DrawWidget::mousePressEvent(QMouseEvent * event)
{
    if(event->button()== Qt::LeftButton)
    {
        QPainter painter(&image);
        if (color.compare("Blue") == 0)
        {
          painter.setBrush(Qt::blue);
          painter.setPen(Qt::blue);
        }
        else if (color.compare("Green")==0)
        {
          painter.setBrush(Qt::green);
          painter.setPen(Qt::green);
        }

        else
        {
          painter.setBrush(Qt::red);
          painter.setPen(Qt::red);
        }
        if (x > 0 && y > 0)
        {
            if (shape.compare("Circle")==0)
              painter.drawEllipse(x-30,y-30,60,60);
            else if (shape.compare("Square")==0)
                painter.drawRect(x-30,y-30,60,60);
            else
            {
                QPointF points[3] = {
                     QPointF(x-30,y+34),
                     QPointF(x+30, y+34),
                     QPointF(x,y-34)
                 };
                painter.drawPolygon(points,3);

            }
        }
        //image.save("/users/drew/Desktop/output.png","PNG");
        emit updatesSaved(false);
        update();


    }
}

void DrawWidget::mouseMoveEvent(QMouseEvent * event)
{
    QPoint point = event->pos();
    x = point.rx();
    y = point.ry();
    QString label;
    if (0<= x && x<= 400 && 0<= y && y<=400)
    {
        label = "("+QString::number(x)+","+QString::number(y)+")"+shape+":"+color;
        //ui->label->setText(label);
        updateCoord(x,y);
        update();

    }
    emit printCoords(x,y);


}

void DrawWidget::updateBrush(QString shape, QString color)
{
    this->shape = shape;
    this->color = color;
    return;
}
void DrawWidget::updateCoord(int inx, int iny)
{
    x = inx;
    y = iny;
    return;
}

DrawWidget::~DrawWidget()
{
    delete ui;
}

