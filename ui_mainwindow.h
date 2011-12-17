/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Oct 31 21:40:02 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <drawwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionCircle;
    QAction *actionSquare;
    QAction *actionAbout_3;
    QAction *actionTriangle;
    QWidget *centralWidget;
    DrawWidget *widget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *circleButton;
    QRadioButton *squareButton;
    QRadioButton *triangleButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *redButton;
    QRadioButton *greenButton;
    QRadioButton *blueButton;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuShape;
    QMenu *menuHalp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(599, 485);
        MainWindow->setMouseTracking(true);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName(QString::fromUtf8("actionSquare"));
        actionAbout_3 = new QAction(MainWindow);
        actionAbout_3->setObjectName(QString::fromUtf8("actionAbout_3"));
        actionTriangle = new QAction(MainWindow);
        actionTriangle->setObjectName(QString::fromUtf8("actionTriangle"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMouseTracking(true);
        widget = new DrawWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 400, 400));
        widget->setMinimumSize(QSize(400, 400));
        widget->setMaximumSize(QSize(400, 400));
        widget->setMouseTracking(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 10, 151, 71));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(420, 90, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        circleButton = new QRadioButton(verticalLayoutWidget);
        circleButton->setObjectName(QString::fromUtf8("circleButton"));
        circleButton->setChecked(true);

        verticalLayout->addWidget(circleButton);

        squareButton = new QRadioButton(verticalLayoutWidget);
        squareButton->setObjectName(QString::fromUtf8("squareButton"));

        verticalLayout->addWidget(squareButton);

        triangleButton = new QRadioButton(verticalLayoutWidget);
        triangleButton->setObjectName(QString::fromUtf8("triangleButton"));

        verticalLayout->addWidget(triangleButton);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(420, 190, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        redButton = new QRadioButton(verticalLayoutWidget_2);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        redButton->setChecked(true);

        verticalLayout_2->addWidget(redButton);

        greenButton = new QRadioButton(verticalLayoutWidget_2);
        greenButton->setObjectName(QString::fromUtf8("greenButton"));

        verticalLayout_2->addWidget(greenButton);

        blueButton = new QRadioButton(verticalLayoutWidget_2);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));

        verticalLayout_2->addWidget(blueButton);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 599, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuShape = new QMenu(menuBar);
        menuShape->setObjectName(QString::fromUtf8("menuShape"));
        menuHalp = new QMenu(menuBar);
        menuHalp->setObjectName(QString::fromUtf8("menuHalp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuShape->menuAction());
        menuBar->addAction(menuHalp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuShape->addAction(actionCircle);
        menuShape->addAction(actionSquare);
        menuShape->addAction(actionTriangle);
        menuHalp->addAction(actionAbout_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", 0, QApplication::UnicodeUTF8));
        actionSquare->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        actionAbout_3->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionTriangle->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "(400,400)", 0, QApplication::UnicodeUTF8));
        circleButton->setText(QApplication::translate("MainWindow", "Circle", 0, QApplication::UnicodeUTF8));
        squareButton->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        triangleButton->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        redButton->setText(QApplication::translate("MainWindow", "Red", 0, QApplication::UnicodeUTF8));
        greenButton->setText(QApplication::translate("MainWindow", "Green", 0, QApplication::UnicodeUTF8));
        blueButton->setText(QApplication::translate("MainWindow", "Blue", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuShape->setTitle(QApplication::translate("MainWindow", "Shape", 0, QApplication::UnicodeUTF8));
        menuHalp->setTitle(QApplication::translate("MainWindow", "Halp", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
