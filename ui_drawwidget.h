/********************************************************************************
** Form generated from reading UI file 'drawwidget.ui'
**
** Created: Mon Oct 31 21:40:02 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWWIDGET_H
#define UI_DRAWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawWidget
{
public:

    void setupUi(QWidget *DrawWidget)
    {
        if (DrawWidget->objectName().isEmpty())
            DrawWidget->setObjectName(QString::fromUtf8("DrawWidget"));
        DrawWidget->resize(400, 300);

        retranslateUi(DrawWidget);

        QMetaObject::connectSlotsByName(DrawWidget);
    } // setupUi

    void retranslateUi(QWidget *DrawWidget)
    {
        DrawWidget->setWindowTitle(QApplication::translate("DrawWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DrawWidget: public Ui_DrawWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWWIDGET_H
