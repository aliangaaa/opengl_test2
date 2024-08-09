/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "TheAdvanced.h"
#include "TheBasic.h"
#include "TheLighting.h"
#include "TheTest.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    TheBasic *tabBasic;
    TheLighting *tabLighting;
    TheAdvanced *tabAdvanced;
    TheTest *tabTest;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(776, 596);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabBasic = new TheBasic();
        tabBasic->setObjectName(QString::fromUtf8("tabBasic"));
        tabWidget->addTab(tabBasic, QString());
        tabLighting = new TheLighting();
        tabLighting->setObjectName(QString::fromUtf8("tabLighting"));
        tabWidget->addTab(tabLighting, QString());
        tabAdvanced = new TheAdvanced();
        tabAdvanced->setObjectName(QString::fromUtf8("tabAdvanced"));
        tabWidget->addTab(tabAdvanced, QString());
        tabTest = new TheTest();
        tabTest->setObjectName(QString::fromUtf8("tabTest"));
        tabWidget->addTab(tabTest, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 776, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Learn OpenGL (By: GongJianBo 1992)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBasic), QCoreApplication::translate("MainWindow", "Basic", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLighting), QCoreApplication::translate("MainWindow", "Lighting", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTest), QCoreApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
