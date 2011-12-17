/* Drew Schuster*/
#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <Qtgui>


/* The draw widget is where the image is drawn onto*/
namespace Ui {
    class DrawWidget;
}

class DrawWidget : public QWidget
{
    Q_OBJECT

public:
    QString shape;
    QString color;
    int x;
    int y;
    QImage image;
    void updateCoord(int x,int y);
    void updateBrush(QString shape,QString color);
    void paintEvent(QPaintEvent * event);
    void leaveEvent ( QEvent * event );
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    explicit DrawWidget(QWidget *parent = 0);
    ~DrawWidget();

signals:
    void updatesSaved(bool isSaved);
    void printCoords(int x,int y);

private:
    Ui::DrawWidget *ui;
};

#endif // DRAWWIDGET_H

