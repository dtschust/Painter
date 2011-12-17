/* Drew Schuster*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    shape = "Circle";
    color = "Red";
    isSaved= true;
    ui->widget->updateBrush(shape,color);
    QObject::connect(ui->widget, SIGNAL(printCoords(int,int)),
                          this, SLOT(updateLabel(int,int)));
    QObject::connect(ui->widget,SIGNAL(updatesSaved(bool)),
                          this, SLOT(updateSaved(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_widget_destroyed()
{

}

void MainWindow::mouseMoveEvent(QMouseEvent * event)
{
    /*int x = event->globalX();
    int y = event->globalY();
    QPoint point = event->pos();
    x = point.rx();
    y = point.ry();
    QString label;*/
    //if (0<= x && x<= 400 && 0<= y && y<=400)
    //{
        //label = "("+QString::number(x)+","+QString::number(y)+")"+shape+":"+color;
        //ui->label->setText(label);
        ui->widget->updateCoord(-1,-1);
        ui->widget->update();

    //}

}

void MainWindow::updateSaved(bool isSave)
{
    this->isSaved = isSave;
}

void MainWindow::updateLabel(int inx,int iny)
{
    QString label;
    label = "("+QString::number(inx)+","+QString::number(iny)+")";
    ui->label->setText(label);
}

QString MainWindow::getColor()
{
    return color;
}
QString MainWindow::getShape()
{
    return shape;
}




void MainWindow::on_label_linkActivated(const QString &link)
{

}

void MainWindow::on_circleButton_pressed()
{
    MainWindow::shape = "Circle";
    ui->widget->updateBrush(shape,color);
}

void MainWindow::on_squareButton_pressed()
{
    MainWindow::shape = "Square";
    ui->widget->updateBrush(shape,color);

}

void MainWindow::on_triangleButton_pressed()
{
    MainWindow::shape = "Triangle";
    ui->widget->updateBrush(shape,color);

}

void MainWindow::on_redButton_pressed()
{
    MainWindow::color = "Red";
    ui->widget->updateBrush(shape,color);

}

void MainWindow::on_greenButton_pressed()
{
    MainWindow::color = "Green";
    ui->widget->updateBrush(shape,color);

}

void MainWindow::on_blueButton_pressed()
{
    MainWindow::color = "Blue";
    ui->widget->updateBrush(shape,color);

}

void MainWindow::on_actionTriangle_triggered()
{
    MainWindow::shape = "Triangle";
    ui->triangleButton->setChecked(true);
    ui->widget->updateBrush(shape,color);


}

void MainWindow::on_actionSquare_triggered()
{
    MainWindow::shape = "Square";
    ui->squareButton->setChecked(true);

    ui->widget->updateBrush(shape,color);



}

void MainWindow::on_actionCircle_triggered()
{
    MainWindow::shape = "Circle";
    ui->circleButton->setChecked(true);

    ui->widget->updateBrush(shape,color);


}

void MainWindow::on_actionExit_triggered()
{
  if (!isSaved)
  {
    switch( QMessageBox::information(this,"Save image?","Do you want to save the changes to this document before closing? If you don't save, your changes will be lost.","Close without Saving","Cancel","Save"))
    {
    case 0:
        exit(0);
        break;
    case 1:
        return;
    case 2:
        QString filename = QFileDialog::getSaveFileName(this,tr("Save"),"image",tr("PNG (*.png )"));
        if (!filename.isNull())
        {
          ui->widget->image.save(filename,"PNG");
          isSaved=true;
        }
        exit(0);
        break;
    }
  }
}

void MainWindow::on_actionAbout_3_triggered()
{
    QMessageBox::information(this,tr("About"),"ECE 462 Fall 2011\nDrew Schuster\ndtschust","OK");
}

void MainWindow::on_actionNew_triggered()
{
    if (!isSaved)
    {
        switch( QMessageBox::information(this,"Save image?","The image has changed since the last save","Close without Saving","Cancel","Save"))
        {
        case 0:
            break;
        case 1:
            return;
        case 2:
            QString filename = QFileDialog::getSaveFileName(this,tr("Save"),"image",tr("PNG (*.png )"));
            if (!filename.isNull())
            {
              ui->widget->image.save(filename,"PNG");
              isSaved=true;
            }
            break;
        }
    }

    ui->widget->image.fill(qRgb(255,255,255));
    ui->widget->updateCoord(-1,-1);
    ui->widget->update();


}

void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,tr("Save"),"image",tr("PNG (*.png )"));
    if (!filename.isNull())
    {
      ui->widget->image.save(filename,"PNG");
      isSaved=true;
    }

}

void MainWindow::on_actionOpen_triggered()
{
    if (!isSaved)
    {
        switch( QMessageBox::information(this,"Save image?","The image has changed since the last save","Close without Saving","Cancel","Save"))
        {
        case 0:
            break;
        case 1:
            return;
        case 2:
            QString filename = QFileDialog::getSaveFileName(this,tr("Save"),"image",tr("PNG (*.png )"));
            if (!filename.isNull())
            {
              ui->widget->image.save(filename,"PNG");
              isSaved=true;
            }
            break;
        }
    }
    QString openFile = QFileDialog::getOpenFileName(this,tr("Open"),"image",tr("PNG (*.png )"));
    if (!openFile.isNull())
    {
        ui->widget->image.load(openFile);
    }
    else
    {
        ui->widget->image.fill(qRgb(255,255,255));
    }
    ui->widget->updateCoord(-1,-1);
    ui->widget->update();


}
