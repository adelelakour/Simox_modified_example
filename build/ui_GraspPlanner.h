/********************************************************************************
** Form generated from reading UI file 'GraspPlanner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRASPPLANNER_H
#define UI_GRASPPLANNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraspPlanner
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frameViewer;
    QGroupBox *groupBox;
    QPushButton *pushButtonReset;
    QLabel *label_10;
    QCheckBox *checkBoxColModel;
    QCheckBox *checkBoxCones;
    QCheckBox *checkBoxGrasps;
    QPushButton *pushButtonPlan;
    QGroupBox *groupBox_2;
    QCheckBox *checkBoxFoceClosure;
    QSpinBox *spinBoxGraspNumber;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBoxTimeOut;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBoxQuality;
    QLabel *label;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonOpen;
    QLabel *labelInfo;
    QCheckBox *checkBoxHighlight;
    QPushButton *pushButtonPlanBatch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraspPlanner)
    {
        if (GraspPlanner->objectName().isEmpty())
            GraspPlanner->setObjectName(QString::fromUtf8("GraspPlanner"));
        GraspPlanner->resize(1079, 819);
        centralwidget = new QWidget(GraspPlanner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frameViewer = new QFrame(centralwidget);
        frameViewer->setObjectName(QString::fromUtf8("frameViewer"));
        frameViewer->setFrameShape(QFrame::StyledPanel);
        frameViewer->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameViewer, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        pushButtonReset = new QPushButton(groupBox);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(20, 20, 171, 28));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 450, 121, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        checkBoxColModel = new QCheckBox(groupBox);
        checkBoxColModel->setObjectName(QString::fromUtf8("checkBoxColModel"));
        checkBoxColModel->setGeometry(QRect(20, 480, 141, 17));
        checkBoxCones = new QCheckBox(groupBox);
        checkBoxCones->setObjectName(QString::fromUtf8("checkBoxCones"));
        checkBoxCones->setGeometry(QRect(20, 500, 141, 17));
        checkBoxGrasps = new QCheckBox(groupBox);
        checkBoxGrasps->setObjectName(QString::fromUtf8("checkBoxGrasps"));
        checkBoxGrasps->setGeometry(QRect(20, 520, 141, 17));
        pushButtonPlan = new QPushButton(groupBox);
        pushButtonPlan->setObjectName(QString::fromUtf8("pushButtonPlan"));
        pushButtonPlan->setGeometry(QRect(10, 300, 91, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 70, 181, 221));
        checkBoxFoceClosure = new QCheckBox(groupBox_2);
        checkBoxFoceClosure->setObjectName(QString::fromUtf8("checkBoxFoceClosure"));
        checkBoxFoceClosure->setGeometry(QRect(30, 190, 131, 17));
        checkBoxFoceClosure->setChecked(true);
        spinBoxGraspNumber = new QSpinBox(groupBox_2);
        spinBoxGraspNumber->setObjectName(QString::fromUtf8("spinBoxGraspNumber"));
        spinBoxGraspNumber->setGeometry(QRect(30, 40, 111, 22));
        spinBoxGraspNumber->setMinimum(1);
        spinBoxGraspNumber->setMaximum(10000000);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 121, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 70, 181, 16));
        spinBoxTimeOut = new QSpinBox(groupBox_2);
        spinBoxTimeOut->setObjectName(QString::fromUtf8("spinBoxTimeOut"));
        spinBoxTimeOut->setGeometry(QRect(30, 110, 111, 22));
        spinBoxTimeOut->setMinimum(0);
        spinBoxTimeOut->setMaximum(10000000);
        spinBoxTimeOut->setValue(30);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 140, 171, 16));
        doubleSpinBoxQuality = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxQuality->setObjectName(QString::fromUtf8("doubleSpinBoxQuality"));
        doubleSpinBoxQuality->setGeometry(QRect(30, 160, 111, 22));
        doubleSpinBoxQuality->setDecimals(3);
        doubleSpinBoxQuality->setMaximum(1);
        doubleSpinBoxQuality->setSingleStep(0.001);
        doubleSpinBoxQuality->setValue(0.01);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 131, 17));
        pushButtonSave = new QPushButton(groupBox);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(30, 400, 141, 31));
        pushButtonClose = new QPushButton(groupBox);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(30, 340, 71, 31));
        pushButtonOpen = new QPushButton(groupBox);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
        pushButtonOpen->setGeometry(QRect(110, 340, 71, 31));
        labelInfo = new QLabel(groupBox);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(20, 560, 161, 171));
        labelInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        checkBoxHighlight = new QCheckBox(groupBox);
        checkBoxHighlight->setObjectName(QString::fromUtf8("checkBoxHighlight"));
        checkBoxHighlight->setGeometry(QRect(20, 540, 141, 17));
        pushButtonPlanBatch = new QPushButton(groupBox);
        pushButtonPlanBatch->setObjectName(QString::fromUtf8("pushButtonPlanBatch"));
        pushButtonPlanBatch->setGeometry(QRect(110, 300, 81, 31));

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        GraspPlanner->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraspPlanner);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        GraspPlanner->setMenuBar(menubar);
        statusbar = new QStatusBar(GraspPlanner);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraspPlanner->setStatusBar(statusbar);

        retranslateUi(GraspPlanner);

        QMetaObject::connectSlotsByName(GraspPlanner);
    } // setupUi

    void retranslateUi(QMainWindow *GraspPlanner)
    {
        GraspPlanner->setWindowTitle(QApplication::translate("GraspPlanner", "GraspStudio - GraspPlanner", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButtonReset->setText(QApplication::translate("GraspPlanner", "Reset", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GraspPlanner", "Visualization", 0, QApplication::UnicodeUTF8));
        checkBoxColModel->setText(QApplication::translate("GraspPlanner", "Collision Model", 0, QApplication::UnicodeUTF8));
        checkBoxCones->setText(QApplication::translate("GraspPlanner", "Friction Cones", 0, QApplication::UnicodeUTF8));
        checkBoxGrasps->setText(QApplication::translate("GraspPlanner", "Show grasps", 0, QApplication::UnicodeUTF8));
        pushButtonPlan->setText(QApplication::translate("GraspPlanner", "Plan grasp(s)", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GraspPlanner", "Grasp Planning Options", 0, QApplication::UnicodeUTF8));
        checkBoxFoceClosure->setText(QApplication::translate("GraspPlanner", "Force closure", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GraspPlanner", "Number of Grasps", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("GraspPlanner", "Timeout, seconds", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("GraspPlanner", "Min quality", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GraspPlanner", " (0=endless)", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("GraspPlanner", "Save", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("GraspPlanner", "Close", 0, QApplication::UnicodeUTF8));
        pushButtonOpen->setText(QApplication::translate("GraspPlanner", "Open", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QApplication::translate("GraspPlanner", "Grasps: 0", 0, QApplication::UnicodeUTF8));
        checkBoxHighlight->setText(QApplication::translate("GraspPlanner", "Highlight", 0, QApplication::UnicodeUTF8));
        pushButtonPlanBatch->setText(QApplication::translate("GraspPlanner", "Plan batch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GraspPlanner: public Ui_GraspPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRASPPLANNER_H
