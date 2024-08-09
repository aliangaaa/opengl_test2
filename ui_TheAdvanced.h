/********************************************************************************
** Form generated from reading UI file 'TheAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEADVANCED_H
#define UI_THEADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GLBlending.h"
#include "GLDepthTesting.h"
#include "GLFaceCulling.h"
#include "GLFrameBuffer.h"
#include "GLFrameBufferQt.h"

QT_BEGIN_NAMESPACE

class Ui_TheAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabDepthTesting;
    QVBoxLayout *verticalLayout_2;
    GLDepthTesting *depthTesting;
    QWidget *tabBlending;
    QVBoxLayout *verticalLayout_4;
    GLBlending *blending;
    QWidget *tabFaceCulling;
    QVBoxLayout *verticalLayout_3;
    GLFaceCulling *faceCulling;
    QWidget *tabFrameBuffer;
    QVBoxLayout *verticalLayout_5;
    GLFrameBuffer *frameBuffer;
    QWidget *tabFrameBufferQt;
    QVBoxLayout *verticalLayout_6;
    GLFrameBufferQt *frameBufferQt;

    void setupUi(QWidget *TheAdvanced)
    {
        if (TheAdvanced->objectName().isEmpty())
            TheAdvanced->setObjectName(QString::fromUtf8("TheAdvanced"));
        TheAdvanced->resize(632, 447);
        verticalLayout = new QVBoxLayout(TheAdvanced);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(TheAdvanced);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabDepthTesting = new QWidget();
        tabDepthTesting->setObjectName(QString::fromUtf8("tabDepthTesting"));
        verticalLayout_2 = new QVBoxLayout(tabDepthTesting);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        depthTesting = new GLDepthTesting(tabDepthTesting);
        depthTesting->setObjectName(QString::fromUtf8("depthTesting"));

        verticalLayout_2->addWidget(depthTesting);

        tabWidget->addTab(tabDepthTesting, QString());
        tabBlending = new QWidget();
        tabBlending->setObjectName(QString::fromUtf8("tabBlending"));
        verticalLayout_4 = new QVBoxLayout(tabBlending);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        blending = new GLBlending(tabBlending);
        blending->setObjectName(QString::fromUtf8("blending"));

        verticalLayout_4->addWidget(blending);

        tabWidget->addTab(tabBlending, QString());
        tabFaceCulling = new QWidget();
        tabFaceCulling->setObjectName(QString::fromUtf8("tabFaceCulling"));
        verticalLayout_3 = new QVBoxLayout(tabFaceCulling);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        faceCulling = new GLFaceCulling(tabFaceCulling);
        faceCulling->setObjectName(QString::fromUtf8("faceCulling"));

        verticalLayout_3->addWidget(faceCulling);

        tabWidget->addTab(tabFaceCulling, QString());
        tabFrameBuffer = new QWidget();
        tabFrameBuffer->setObjectName(QString::fromUtf8("tabFrameBuffer"));
        verticalLayout_5 = new QVBoxLayout(tabFrameBuffer);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frameBuffer = new GLFrameBuffer(tabFrameBuffer);
        frameBuffer->setObjectName(QString::fromUtf8("frameBuffer"));

        verticalLayout_5->addWidget(frameBuffer);

        tabWidget->addTab(tabFrameBuffer, QString());
        tabFrameBufferQt = new QWidget();
        tabFrameBufferQt->setObjectName(QString::fromUtf8("tabFrameBufferQt"));
        verticalLayout_6 = new QVBoxLayout(tabFrameBufferQt);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        frameBufferQt = new GLFrameBufferQt(tabFrameBufferQt);
        frameBufferQt->setObjectName(QString::fromUtf8("frameBufferQt"));

        verticalLayout_6->addWidget(frameBufferQt);

        tabWidget->addTab(tabFrameBufferQt, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TheAdvanced);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(TheAdvanced);
    } // setupUi

    void retranslateUi(QWidget *TheAdvanced)
    {
        TheAdvanced->setWindowTitle(QCoreApplication::translate("TheAdvanced", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDepthTesting), QCoreApplication::translate("TheAdvanced", "DepthTesting", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBlending), QCoreApplication::translate("TheAdvanced", "Blending", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFaceCulling), QCoreApplication::translate("TheAdvanced", "FaceCulling", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFrameBuffer), QCoreApplication::translate("TheAdvanced", "FrameBuffer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFrameBufferQt), QCoreApplication::translate("TheAdvanced", "FrameBuffer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheAdvanced: public Ui_TheAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEADVANCED_H
