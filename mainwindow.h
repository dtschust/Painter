/* Drew Schuster*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Ui::MainWindow *ui;
    QString shape;
    QString color;
    bool isSaved;



   void mouseMoveEvent(QMouseEvent * event);

    ~MainWindow();
public slots:
    QString getColor();
    QString getShape();
    void updateSaved(bool isSaved);
    void updateLabel(int inx,int iny);


private slots:
    void on_widget_destroyed();

    void on_label_linkActivated(const QString &link);

    void on_circleButton_pressed();

    void on_squareButton_pressed();

    void on_triangleButton_pressed();

    void on_redButton_pressed();

    void on_greenButton_pressed();

    void on_blueButton_pressed();

    void on_actionTriangle_triggered();

    void on_actionSquare_triggered();

    void on_actionCircle_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_3_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

private:

};

#endif // MAINWINDOW_H
