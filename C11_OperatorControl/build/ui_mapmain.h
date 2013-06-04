/********************************************************************************
** Form generated from reading UI file 'mapmain.ui'
**
** Created: Tue Jun 4 09:28:09 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPMAIN_H
#define UI_MAPMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CMapMainClass
{
public:
    QHBoxLayout *horizontalLayout;
    CMapWidget *graphicsView;

    void setupUi(QWidget *CMapMainClass)
    {
        if (CMapMainClass->objectName().isEmpty())
            CMapMainClass->setObjectName(QString::fromUtf8("CMapMainClass"));
        CMapMainClass->resize(950, 950);
        CMapMainClass->setMinimumSize(QSize(900, 950));
        CMapMainClass->setMaximumSize(QSize(950, 950));
        CMapMainClass->setMouseTracking(false);
        horizontalLayout = new QHBoxLayout(CMapMainClass);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView = new CMapWidget(CMapMainClass);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMouseTracking(false);
        graphicsView->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 170, 255);"));

        horizontalLayout->addWidget(graphicsView);


        retranslateUi(CMapMainClass);

        QMetaObject::connectSlotsByName(CMapMainClass);
    } // setupUi

    void retranslateUi(QWidget *CMapMainClass)
    {
        CMapMainClass->setWindowTitle(QApplication::translate("CMapMainClass", "CMapMain", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMapMainClass: public Ui_CMapMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPMAIN_H
