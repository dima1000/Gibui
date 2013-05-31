/********************************************************************************
** Form generated from reading UI file 'imagedraw.ui'
**
** Created: Tue May 21 12:52:40 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDRAW_H
#define UI_IMAGEDRAW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mapmain.h"

QT_BEGIN_NAMESPACE

class Ui_ImageDrawClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widMainMenu;
    QVBoxLayout *verticalLayout_2;
    QWidget *wid1;
    QGridLayout *gridLayout;
    QWidget *wid14;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnSlider2L;
    QSlider *sld141;
    QPushButton *btnSlider2R;
    QWidget *wid12;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnAnnotation;
    QPushButton *btnMagGlass;
    QSpacerItem *horizontalSpacer;
    QWidget *wid11;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSlider1L;
    QSlider *sld111;
    QPushButton *btnSlider1R;
    QWidget *wid13;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnSlider3L;
    QSlider *sld131;
    QPushButton *btnSlider3R;
    QFrame *line;
    QWidget *wid2;
    QVBoxLayout *verticalLayout;
    QWidget *widMissions;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblMissions;
    QComboBox *cmbMissions;
    QWidget *widRequest;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblRequest;
    QComboBox *cmbRequest;
    QWidget *wid23;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnArrow;
    QSpacerItem *horizontalSpacer_2;
    QWidget *wid24;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnCreate;
    QPushButton *btnPath;
    QPushButton *btnNoGo;
    QPushButton *btnDoor;
    QPushButton *btnCarInt;
    QPushButton *btnRotate;
    QPushButton *btnSteps;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_2;
    QWidget *wid3;
    QVBoxLayout *verticalLayout_3;
    QWidget *wid31;
    QGridLayout *gridLayout_2;
    QLabel *lblHigh;
    QLabel *lblLow;
    QSlider *sldHighLow;
    QLabel *lblDown;
    QSlider *sldDownAbove;
    QLabel *lblAbove;
    QFrame *line_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lblSafe;
    QSlider *sldHighLow_2;
    QLabel *lblFast;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lblManAutp;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *lblWalkPath;
    QRadioButton *rbtnPathAuto;
    QLabel *lblPathPlan;
    QRadioButton *rbtnWalkMan;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *rbtnWalkAuto;
    QRadioButton *rbtnPathMan;
    QLabel *lblDrivePath;
    QRadioButton *rbtnDriveMan;
    QRadioButton *rbtnDriveAuto;
    QFrame *line_6;
    QWidget *wid5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblAll;
    QSlider *sldAllMin;
    QLabel *lblMinFeedback;
    QPushButton *btnIndication;
    QFrame *line_4;
    QSpacerItem *verticalSpacer;
    QWidget *wid4;
    QVBoxLayout *verticalLayout_4;
    QWidget *wid41;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btnRestore;
    QSpacerItem *horizontalSpacer_4;
    QWidget *wid42;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnAllow;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnPlayPause;
    QFrame *line_5;
    QWidget *widMain;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *widImages;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *layImages;
    QSpacerItem *verticalSpacer_2;
    CMapMain *mapWidget;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *ImageDrawClass)
    {
        if (ImageDrawClass->objectName().isEmpty())
            ImageDrawClass->setObjectName(QString::fromUtf8("ImageDrawClass"));
        ImageDrawClass->resize(1920, 1000);
        ImageDrawClass->setMinimumSize(QSize(1920, 1000));
        ImageDrawClass->setMaximumSize(QSize(1920, 1000));
        ImageDrawClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        ImageDrawClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(ImageDrawClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        widMainMenu = new QWidget(centralWidget);
        widMainMenu->setObjectName(QString::fromUtf8("widMainMenu"));
        widMainMenu->setMinimumSize(QSize(290, 0));
        widMainMenu->setMaximumSize(QSize(290, 16777215));
        verticalLayout_2 = new QVBoxLayout(widMainMenu);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        wid1 = new QWidget(widMainMenu);
        wid1->setObjectName(QString::fromUtf8("wid1"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wid1->sizePolicy().hasHeightForWidth());
        wid1->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(wid1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        wid14 = new QWidget(wid1);
        wid14->setObjectName(QString::fromUtf8("wid14"));
        horizontalLayout_4 = new QHBoxLayout(wid14);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnSlider2L = new QPushButton(wid14);
        btnSlider2L->setObjectName(QString::fromUtf8("btnSlider2L"));
        btnSlider2L->setMinimumSize(QSize(0, 25));
        btnSlider2L->setMaximumSize(QSize(25, 25));
        btnSlider2L->setCheckable(true);

        horizontalLayout_4->addWidget(btnSlider2L);

        sld141 = new QSlider(wid14);
        sld141->setObjectName(QString::fromUtf8("sld141"));
        sld141->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(sld141);

        btnSlider2R = new QPushButton(wid14);
        btnSlider2R->setObjectName(QString::fromUtf8("btnSlider2R"));
        btnSlider2R->setMinimumSize(QSize(0, 25));
        btnSlider2R->setMaximumSize(QSize(25, 25));
        btnSlider2R->setCheckable(true);

        horizontalLayout_4->addWidget(btnSlider2R);


        gridLayout->addWidget(wid14, 1, 0, 1, 1);

        wid12 = new QWidget(wid1);
        wid12->setObjectName(QString::fromUtf8("wid12"));
        horizontalLayout_6 = new QHBoxLayout(wid12);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnAnnotation = new QPushButton(wid12);
        btnAnnotation->setObjectName(QString::fromUtf8("btnAnnotation"));
        btnAnnotation->setMinimumSize(QSize(0, 25));
        btnAnnotation->setMaximumSize(QSize(25, 25));
        btnAnnotation->setCheckable(true);

        horizontalLayout_6->addWidget(btnAnnotation);

        btnMagGlass = new QPushButton(wid12);
        btnMagGlass->setObjectName(QString::fromUtf8("btnMagGlass"));
        btnMagGlass->setMinimumSize(QSize(0, 25));
        btnMagGlass->setMaximumSize(QSize(25, 25));
        btnMagGlass->setStyleSheet(QString::fromUtf8(""));
        btnMagGlass->setCheckable(true);

        horizontalLayout_6->addWidget(btnMagGlass);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout->addWidget(wid12, 0, 1, 1, 1);

        wid11 = new QWidget(wid1);
        wid11->setObjectName(QString::fromUtf8("wid11"));
        horizontalLayout_3 = new QHBoxLayout(wid11);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSlider1L = new QPushButton(wid11);
        btnSlider1L->setObjectName(QString::fromUtf8("btnSlider1L"));
        btnSlider1L->setMinimumSize(QSize(0, 25));
        btnSlider1L->setMaximumSize(QSize(25, 25));
        btnSlider1L->setCheckable(true);

        horizontalLayout_3->addWidget(btnSlider1L);

        sld111 = new QSlider(wid11);
        sld111->setObjectName(QString::fromUtf8("sld111"));
        sld111->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sld111);

        btnSlider1R = new QPushButton(wid11);
        btnSlider1R->setObjectName(QString::fromUtf8("btnSlider1R"));
        btnSlider1R->setMinimumSize(QSize(0, 25));
        btnSlider1R->setMaximumSize(QSize(25, 25));
        btnSlider1R->setCheckable(true);

        horizontalLayout_3->addWidget(btnSlider1R);


        gridLayout->addWidget(wid11, 0, 0, 1, 1);

        wid13 = new QWidget(wid1);
        wid13->setObjectName(QString::fromUtf8("wid13"));
        horizontalLayout_5 = new QHBoxLayout(wid13);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnSlider3L = new QPushButton(wid13);
        btnSlider3L->setObjectName(QString::fromUtf8("btnSlider3L"));
        btnSlider3L->setMinimumSize(QSize(0, 25));
        btnSlider3L->setMaximumSize(QSize(25, 25));
        btnSlider3L->setCheckable(true);

        horizontalLayout_5->addWidget(btnSlider3L);

        sld131 = new QSlider(wid13);
        sld131->setObjectName(QString::fromUtf8("sld131"));
        sld131->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(sld131);

        btnSlider3R = new QPushButton(wid13);
        btnSlider3R->setObjectName(QString::fromUtf8("btnSlider3R"));
        btnSlider3R->setMinimumSize(QSize(0, 25));
        btnSlider3R->setMaximumSize(QSize(25, 25));
        btnSlider3R->setCheckable(true);

        horizontalLayout_5->addWidget(btnSlider3R);


        gridLayout->addWidget(wid13, 2, 0, 1, 1);


        verticalLayout_2->addWidget(wid1);

        line = new QFrame(widMainMenu);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        wid2 = new QWidget(widMainMenu);
        wid2->setObjectName(QString::fromUtf8("wid2"));
        verticalLayout = new QVBoxLayout(wid2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widMissions = new QWidget(wid2);
        widMissions->setObjectName(QString::fromUtf8("widMissions"));
        horizontalLayout_7 = new QHBoxLayout(widMissions);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblMissions = new QLabel(widMissions);
        lblMissions->setObjectName(QString::fromUtf8("lblMissions"));

        horizontalLayout_7->addWidget(lblMissions);

        cmbMissions = new QComboBox(widMissions);
        cmbMissions->setObjectName(QString::fromUtf8("cmbMissions"));

        horizontalLayout_7->addWidget(cmbMissions);


        verticalLayout->addWidget(widMissions);

        widRequest = new QWidget(wid2);
        widRequest->setObjectName(QString::fromUtf8("widRequest"));
        horizontalLayout_8 = new QHBoxLayout(widRequest);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lblRequest = new QLabel(widRequest);
        lblRequest->setObjectName(QString::fromUtf8("lblRequest"));

        horizontalLayout_8->addWidget(lblRequest);

        cmbRequest = new QComboBox(widRequest);
        cmbRequest->setObjectName(QString::fromUtf8("cmbRequest"));

        horizontalLayout_8->addWidget(cmbRequest);


        verticalLayout->addWidget(widRequest);

        wid23 = new QWidget(wid2);
        wid23->setObjectName(QString::fromUtf8("wid23"));
        horizontalLayout_9 = new QHBoxLayout(wid23);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btnArrow = new QPushButton(wid23);
        btnArrow->setObjectName(QString::fromUtf8("btnArrow"));
        btnArrow->setMinimumSize(QSize(0, 25));
        btnArrow->setMaximumSize(QSize(25, 25));
        btnArrow->setCheckable(true);

        horizontalLayout_9->addWidget(btnArrow);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(wid23);

        wid24 = new QWidget(wid2);
        wid24->setObjectName(QString::fromUtf8("wid24"));
        horizontalLayout_10 = new QHBoxLayout(wid24);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        btnCreate = new QPushButton(wid24);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));
        btnCreate->setMinimumSize(QSize(0, 25));
        btnCreate->setMaximumSize(QSize(25, 25));
        btnCreate->setCheckable(true);

        horizontalLayout_10->addWidget(btnCreate);

        btnPath = new QPushButton(wid24);
        btnPath->setObjectName(QString::fromUtf8("btnPath"));
        btnPath->setEnabled(false);
        btnPath->setMinimumSize(QSize(0, 25));
        btnPath->setMaximumSize(QSize(25, 25));
        btnPath->setCheckable(true);

        horizontalLayout_10->addWidget(btnPath);

        btnNoGo = new QPushButton(wid24);
        btnNoGo->setObjectName(QString::fromUtf8("btnNoGo"));
        btnNoGo->setEnabled(false);
        btnNoGo->setMinimumSize(QSize(0, 25));
        btnNoGo->setMaximumSize(QSize(25, 25));
        btnNoGo->setCheckable(true);

        horizontalLayout_10->addWidget(btnNoGo);

        btnDoor = new QPushButton(wid24);
        btnDoor->setObjectName(QString::fromUtf8("btnDoor"));
        btnDoor->setEnabled(false);
        btnDoor->setMinimumSize(QSize(0, 25));
        btnDoor->setMaximumSize(QSize(25, 25));
        btnDoor->setCheckable(true);

        horizontalLayout_10->addWidget(btnDoor);

        btnCarInt = new QPushButton(wid24);
        btnCarInt->setObjectName(QString::fromUtf8("btnCarInt"));
        btnCarInt->setEnabled(false);
        btnCarInt->setMinimumSize(QSize(0, 25));
        btnCarInt->setMaximumSize(QSize(25, 25));
        btnCarInt->setCheckable(true);

        horizontalLayout_10->addWidget(btnCarInt);

        btnRotate = new QPushButton(wid24);
        btnRotate->setObjectName(QString::fromUtf8("btnRotate"));
        btnRotate->setEnabled(false);
        btnRotate->setMinimumSize(QSize(0, 25));
        btnRotate->setMaximumSize(QSize(25, 25));
        btnRotate->setCheckable(true);

        horizontalLayout_10->addWidget(btnRotate);

        btnSteps = new QPushButton(wid24);
        btnSteps->setObjectName(QString::fromUtf8("btnSteps"));
        btnSteps->setEnabled(false);
        btnSteps->setMinimumSize(QSize(0, 25));
        btnSteps->setMaximumSize(QSize(25, 25));
        btnSteps->setCheckable(true);

        horizontalLayout_10->addWidget(btnSteps);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(wid24);


        verticalLayout_2->addWidget(wid2);

        line_2 = new QFrame(widMainMenu);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        wid3 = new QWidget(widMainMenu);
        wid3->setObjectName(QString::fromUtf8("wid3"));
        verticalLayout_3 = new QVBoxLayout(wid3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        wid31 = new QWidget(wid3);
        wid31->setObjectName(QString::fromUtf8("wid31"));
        gridLayout_2 = new QGridLayout(wid31);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblHigh = new QLabel(wid31);
        lblHigh->setObjectName(QString::fromUtf8("lblHigh"));
        lblHigh->setMinimumSize(QSize(40, 0));
        lblHigh->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lblHigh, 0, 0, 1, 1);

        lblLow = new QLabel(wid31);
        lblLow->setObjectName(QString::fromUtf8("lblLow"));

        gridLayout_2->addWidget(lblLow, 0, 2, 1, 1);

        sldHighLow = new QSlider(wid31);
        sldHighLow->setObjectName(QString::fromUtf8("sldHighLow"));
        sldHighLow->setMinimumSize(QSize(96, 0));
        sldHighLow->setMaximumSize(QSize(96, 16777215));
        sldHighLow->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sldHighLow, 0, 1, 1, 1);

        lblDown = new QLabel(wid31);
        lblDown->setObjectName(QString::fromUtf8("lblDown"));
        lblDown->setMinimumSize(QSize(40, 0));
        lblDown->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lblDown, 1, 0, 1, 1);

        sldDownAbove = new QSlider(wid31);
        sldDownAbove->setObjectName(QString::fromUtf8("sldDownAbove"));
        sldDownAbove->setMinimumSize(QSize(96, 0));
        sldDownAbove->setMaximumSize(QSize(96, 16777215));
        sldDownAbove->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sldDownAbove, 1, 1, 1, 1);

        lblAbove = new QLabel(wid31);
        lblAbove->setObjectName(QString::fromUtf8("lblAbove"));

        gridLayout_2->addWidget(lblAbove, 1, 2, 1, 1);


        verticalLayout_3->addWidget(wid31);


        verticalLayout_2->addWidget(wid3);

        line_3 = new QFrame(widMainMenu);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        widget = new QWidget(widMainMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_14 = new QHBoxLayout(widget_3);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 0);
        lblSafe = new QLabel(widget_3);
        lblSafe->setObjectName(QString::fromUtf8("lblSafe"));
        lblSafe->setMinimumSize(QSize(40, 0));
        lblSafe->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_14->addWidget(lblSafe);

        sldHighLow_2 = new QSlider(widget_3);
        sldHighLow_2->setObjectName(QString::fromUtf8("sldHighLow_2"));
        sldHighLow_2->setMinimumSize(QSize(96, 0));
        sldHighLow_2->setMaximumSize(QSize(96, 16777215));
        sldHighLow_2->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(sldHighLow_2);

        lblFast = new QLabel(widget_3);
        lblFast->setObjectName(QString::fromUtf8("lblFast"));

        horizontalLayout_14->addWidget(lblFast);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);

        lblManAutp = new QLabel(widget_3);
        lblManAutp->setObjectName(QString::fromUtf8("lblManAutp"));

        horizontalLayout_14->addWidget(lblManAutp);


        verticalLayout_5->addWidget(widget_3);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, -1);
        lblWalkPath = new QLabel(widget_2);
        lblWalkPath->setObjectName(QString::fromUtf8("lblWalkPath"));

        gridLayout_3->addWidget(lblWalkPath, 1, 1, 1, 1);

        rbtnPathAuto = new QRadioButton(widget_2);
        buttonGroup = new QButtonGroup(ImageDrawClass);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rbtnPathAuto);
        rbtnPathAuto->setObjectName(QString::fromUtf8("rbtnPathAuto"));
        rbtnPathAuto->setMinimumSize(QSize(0, 25));
        rbtnPathAuto->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnPathAuto, 0, 3, 1, 1);

        lblPathPlan = new QLabel(widget_2);
        lblPathPlan->setObjectName(QString::fromUtf8("lblPathPlan"));

        gridLayout_3->addWidget(lblPathPlan, 0, 1, 1, 1);

        rbtnWalkMan = new QRadioButton(widget_2);
        buttonGroup_2 = new QButtonGroup(ImageDrawClass);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(rbtnWalkMan);
        rbtnWalkMan->setObjectName(QString::fromUtf8("rbtnWalkMan"));
        rbtnWalkMan->setMinimumSize(QSize(0, 25));
        rbtnWalkMan->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnWalkMan, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        rbtnWalkAuto = new QRadioButton(widget_2);
        buttonGroup_2->addButton(rbtnWalkAuto);
        rbtnWalkAuto->setObjectName(QString::fromUtf8("rbtnWalkAuto"));
        rbtnWalkAuto->setMinimumSize(QSize(0, 25));
        rbtnWalkAuto->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnWalkAuto, 1, 3, 1, 1);

        rbtnPathMan = new QRadioButton(widget_2);
        buttonGroup->addButton(rbtnPathMan);
        rbtnPathMan->setObjectName(QString::fromUtf8("rbtnPathMan"));
        rbtnPathMan->setMinimumSize(QSize(0, 25));
        rbtnPathMan->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnPathMan, 0, 2, 1, 1);

        lblDrivePath = new QLabel(widget_2);
        lblDrivePath->setObjectName(QString::fromUtf8("lblDrivePath"));

        gridLayout_3->addWidget(lblDrivePath, 2, 1, 1, 1);

        rbtnDriveMan = new QRadioButton(widget_2);
        buttonGroup_3 = new QButtonGroup(ImageDrawClass);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(rbtnDriveMan);
        rbtnDriveMan->setObjectName(QString::fromUtf8("rbtnDriveMan"));
        rbtnDriveMan->setMinimumSize(QSize(0, 25));
        rbtnDriveMan->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnDriveMan, 2, 2, 1, 1);

        rbtnDriveAuto = new QRadioButton(widget_2);
        buttonGroup_3->addButton(rbtnDriveAuto);
        rbtnDriveAuto->setObjectName(QString::fromUtf8("rbtnDriveAuto"));
        rbtnDriveAuto->setMinimumSize(QSize(0, 25));
        rbtnDriveAuto->setMaximumSize(QSize(25, 25));

        gridLayout_3->addWidget(rbtnDriveAuto, 2, 3, 1, 1);


        verticalLayout_5->addWidget(widget_2);


        verticalLayout_2->addWidget(widget);

        line_6 = new QFrame(widMainMenu);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        wid5 = new QWidget(widMainMenu);
        wid5->setObjectName(QString::fromUtf8("wid5"));
        horizontalLayout_11 = new QHBoxLayout(wid5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lblAll = new QLabel(wid5);
        lblAll->setObjectName(QString::fromUtf8("lblAll"));
        lblAll->setMinimumSize(QSize(40, 0));
        lblAll->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_11->addWidget(lblAll);

        sldAllMin = new QSlider(wid5);
        sldAllMin->setObjectName(QString::fromUtf8("sldAllMin"));
        sldAllMin->setMinimumSize(QSize(96, 0));
        sldAllMin->setMaximumSize(QSize(96, 16777215));
        sldAllMin->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(sldAllMin);

        lblMinFeedback = new QLabel(wid5);
        lblMinFeedback->setObjectName(QString::fromUtf8("lblMinFeedback"));

        horizontalLayout_11->addWidget(lblMinFeedback);

        btnIndication = new QPushButton(wid5);
        btnIndication->setObjectName(QString::fromUtf8("btnIndication"));
        btnIndication->setMinimumSize(QSize(0, 16));
        btnIndication->setMaximumSize(QSize(16, 16));
        btnIndication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid green;\n"
"     border-radius: 8px;\n"
"	 background-color: rgb(0, 255, 0);\n"
" }"));

        horizontalLayout_11->addWidget(btnIndication);


        verticalLayout_2->addWidget(wid5);

        line_4 = new QFrame(widMainMenu);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        wid4 = new QWidget(widMainMenu);
        wid4->setObjectName(QString::fromUtf8("wid4"));
        verticalLayout_4 = new QVBoxLayout(wid4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        wid41 = new QWidget(wid4);
        wid41->setObjectName(QString::fromUtf8("wid41"));
        horizontalLayout_12 = new QHBoxLayout(wid41);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        btnRestore = new QPushButton(wid41);
        btnRestore->setObjectName(QString::fromUtf8("btnRestore"));

        horizontalLayout_12->addWidget(btnRestore);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);


        verticalLayout_4->addWidget(wid41);

        wid42 = new QWidget(wid4);
        wid42->setObjectName(QString::fromUtf8("wid42"));
        horizontalLayout_13 = new QHBoxLayout(wid42);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        btnAllow = new QPushButton(wid42);
        btnAllow->setObjectName(QString::fromUtf8("btnAllow"));

        horizontalLayout_13->addWidget(btnAllow);

        horizontalSpacer_5 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        btnPlayPause = new QPushButton(wid42);
        btnPlayPause->setObjectName(QString::fromUtf8("btnPlayPause"));
        btnPlayPause->setMinimumSize(QSize(0, 25));
        btnPlayPause->setMaximumSize(QSize(25, 25));
        btnPlayPause->setCheckable(true);

        horizontalLayout_13->addWidget(btnPlayPause);


        verticalLayout_4->addWidget(wid42);


        verticalLayout_2->addWidget(wid4);


        horizontalLayout->addWidget(widMainMenu);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        widMain = new QWidget(centralWidget);
        widMain->setObjectName(QString::fromUtf8("widMain"));
        horizontalLayout_2 = new QHBoxLayout(widMain);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widImages = new QScrollArea(widMain);
        widImages->setObjectName(QString::fromUtf8("widImages"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widImages->sizePolicy().hasHeightForWidth());
        widImages->setSizePolicy(sizePolicy1);
        widImages->setMinimumSize(QSize(556, 0));
        widImages->setMaximumSize(QSize(556, 16777215));
        widImages->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        widImages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        widImages->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 541, 920));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        layImages = new QVBoxLayout();
        layImages->setSpacing(6);
        layImages->setObjectName(QString::fromUtf8("layImages"));
        layImages->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout_6->addLayout(layImages);

        verticalSpacer_2 = new QSpacerItem(20, 1073, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        widImages->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(widImages);

        mapWidget = new CMapMain(widMain);
        mapWidget->setObjectName(QString::fromUtf8("mapWidget"));

        horizontalLayout_2->addWidget(mapWidget);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        horizontalLayout->addWidget(widMain);

        ImageDrawClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageDrawClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 1920, 25));
        menuBar->setLayoutDirection(Qt::LeftToRight);
        ImageDrawClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageDrawClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(false);
        ImageDrawClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageDrawClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(false);
        ImageDrawClass->setStatusBar(statusBar);

        retranslateUi(ImageDrawClass);

        QMetaObject::connectSlotsByName(ImageDrawClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageDrawClass)
    {
        ImageDrawClass->setWindowTitle(QApplication::translate("ImageDrawClass", "Operator Control", 0, QApplication::UnicodeUTF8));
        btnSlider2L->setText(QString());
        btnSlider2R->setText(QString());
        btnAnnotation->setText(QString());
        btnMagGlass->setText(QString());
        btnSlider1L->setText(QString());
        btnSlider1R->setText(QString());
        btnSlider3L->setText(QString());
        btnSlider3R->setText(QString());
        lblMissions->setText(QApplication::translate("ImageDrawClass", "Missions", 0, QApplication::UnicodeUTF8));
        lblRequest->setText(QApplication::translate("ImageDrawClass", "Request", 0, QApplication::UnicodeUTF8));
        cmbRequest->clear();
        cmbRequest->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ImageDrawClass", "Get image", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageDrawClass", "Get occupancy grid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageDrawClass", "Get path", 0, QApplication::UnicodeUTF8)
        );
        btnArrow->setText(QString());
        btnCreate->setText(QString());
        btnPath->setText(QString());
        btnNoGo->setText(QString());
        btnDoor->setText(QString());
        btnCarInt->setText(QString());
        btnRotate->setText(QString());
        btnSteps->setText(QString());
        lblHigh->setText(QApplication::translate("ImageDrawClass", "High", 0, QApplication::UnicodeUTF8));
        lblLow->setText(QApplication::translate("ImageDrawClass", "Low 3D resolution", 0, QApplication::UnicodeUTF8));
        lblDown->setText(QApplication::translate("ImageDrawClass", "Down", 0, QApplication::UnicodeUTF8));
        lblAbove->setText(QApplication::translate("ImageDrawClass", "Above the horizon", 0, QApplication::UnicodeUTF8));
        lblSafe->setText(QApplication::translate("ImageDrawClass", "Safe", 0, QApplication::UnicodeUTF8));
        lblFast->setText(QApplication::translate("ImageDrawClass", "Fast", 0, QApplication::UnicodeUTF8));
        lblManAutp->setText(QApplication::translate("ImageDrawClass", "Manu/Auto", 0, QApplication::UnicodeUTF8));
        lblWalkPath->setText(QApplication::translate("ImageDrawClass", "Walk Path", 0, QApplication::UnicodeUTF8));
        rbtnPathAuto->setText(QString());
        lblPathPlan->setText(QApplication::translate("ImageDrawClass", "Path Plan", 0, QApplication::UnicodeUTF8));
        rbtnWalkMan->setText(QString());
        rbtnWalkAuto->setText(QString());
        rbtnPathMan->setText(QString());
        lblDrivePath->setText(QApplication::translate("ImageDrawClass", "Drive Path", 0, QApplication::UnicodeUTF8));
        rbtnDriveMan->setText(QString());
        rbtnDriveAuto->setText(QString());
        lblAll->setText(QApplication::translate("ImageDrawClass", "All", 0, QApplication::UnicodeUTF8));
        lblMinFeedback->setText(QApplication::translate("ImageDrawClass", "Minimal feedback", 0, QApplication::UnicodeUTF8));
        btnIndication->setText(QString());
        btnRestore->setText(QApplication::translate("ImageDrawClass", "RESTORE", 0, QApplication::UnicodeUTF8));
        btnAllow->setText(QApplication::translate("ImageDrawClass", "ALLOW", 0, QApplication::UnicodeUTF8));
        btnPlayPause->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageDrawClass: public Ui_ImageDrawClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDRAW_H
