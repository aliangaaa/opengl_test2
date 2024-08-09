/********************************************************************************
** Form generated from reading UI file 'TheTest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THETEST_H
#define UI_THETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyCamera.h"
#include "MyCoordinate.h"
#include "MyPoker.h"
#include "MyQuaternion.h"
#include "MyRayPick.h"
#include "MyTorus.h"
#include "MyTransform.h"

QT_BEGIN_NAMESPACE

class Ui_TheTest
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabTransform;
    QVBoxLayout *verticalLayout_6;
    MyTransform *transform;
    QWidget *tabCoordinate;
    QVBoxLayout *verticalLayout_2;
    MyCoordinate *coordinate;
    QWidget *tabCamera;
    QVBoxLayout *verticalLayout_3;
    MyCamera *camera;
    QWidget *tabPoker;
    QVBoxLayout *verticalLayout_4;
    MyPoker *poker;
    QWidget *tabTorus;
    QVBoxLayout *verticalLayout_7;
    MyTorus *torus;
    QWidget *tabQuaternion;
    QVBoxLayout *verticalLayout_5;
    MyQuaternion *quatemion;
    QWidget *tabRayPick;
    QVBoxLayout *verticalLayout_8;
    MyRayPick *rayPick;

    void setupUi(QWidget *TheTest)
    {
        if (TheTest->objectName().isEmpty())
            TheTest->setObjectName(QString::fromUtf8("TheTest"));
        TheTest->resize(571, 413);
        verticalLayout = new QVBoxLayout(TheTest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(TheTest);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabTransform = new QWidget();
        tabTransform->setObjectName(QString::fromUtf8("tabTransform"));
        verticalLayout_6 = new QVBoxLayout(tabTransform);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        transform = new MyTransform(tabTransform);
        transform->setObjectName(QString::fromUtf8("transform"));

        verticalLayout_6->addWidget(transform);

        tabWidget->addTab(tabTransform, QString());
        tabCoordinate = new QWidget();
        tabCoordinate->setObjectName(QString::fromUtf8("tabCoordinate"));
        verticalLayout_2 = new QVBoxLayout(tabCoordinate);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        coordinate = new MyCoordinate(tabCoordinate);
        coordinate->setObjectName(QString::fromUtf8("coordinate"));

        verticalLayout_2->addWidget(coordinate);

        tabWidget->addTab(tabCoordinate, QString());
        tabCamera = new QWidget();
        tabCamera->setObjectName(QString::fromUtf8("tabCamera"));
        verticalLayout_3 = new QVBoxLayout(tabCamera);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        camera = new MyCamera(tabCamera);
        camera->setObjectName(QString::fromUtf8("camera"));

        verticalLayout_3->addWidget(camera);

        tabWidget->addTab(tabCamera, QString());
        tabPoker = new QWidget();
        tabPoker->setObjectName(QString::fromUtf8("tabPoker"));
        verticalLayout_4 = new QVBoxLayout(tabPoker);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        poker = new MyPoker(tabPoker);
        poker->setObjectName(QString::fromUtf8("poker"));

        verticalLayout_4->addWidget(poker);

        tabWidget->addTab(tabPoker, QString());
        tabTorus = new QWidget();
        tabTorus->setObjectName(QString::fromUtf8("tabTorus"));
        verticalLayout_7 = new QVBoxLayout(tabTorus);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        torus = new MyTorus(tabTorus);
        torus->setObjectName(QString::fromUtf8("torus"));

        verticalLayout_7->addWidget(torus);

        tabWidget->addTab(tabTorus, QString());
        tabQuaternion = new QWidget();
        tabQuaternion->setObjectName(QString::fromUtf8("tabQuaternion"));
        verticalLayout_5 = new QVBoxLayout(tabQuaternion);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        quatemion = new MyQuaternion(tabQuaternion);
        quatemion->setObjectName(QString::fromUtf8("quatemion"));

        verticalLayout_5->addWidget(quatemion);

        tabWidget->addTab(tabQuaternion, QString());
        tabRayPick = new QWidget();
        tabRayPick->setObjectName(QString::fromUtf8("tabRayPick"));
        verticalLayout_8 = new QVBoxLayout(tabRayPick);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        rayPick = new MyRayPick(tabRayPick);
        rayPick->setObjectName(QString::fromUtf8("rayPick"));

        verticalLayout_8->addWidget(rayPick);

        tabWidget->addTab(tabRayPick, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TheTest);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(TheTest);
    } // setupUi

    void retranslateUi(QWidget *TheTest)
    {
        TheTest->setWindowTitle(QCoreApplication::translate("TheTest", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTransform), QCoreApplication::translate("TheTest", "Transform", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCoordinate), QCoreApplication::translate("TheTest", "Coordinate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCamera), QCoreApplication::translate("TheTest", "Camera", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPoker), QCoreApplication::translate("TheTest", "Poker", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTorus), QCoreApplication::translate("TheTest", "Torus", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQuaternion), QCoreApplication::translate("TheTest", "Quaternion", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRayPick), QCoreApplication::translate("TheTest", "RayPick", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheTest: public Ui_TheTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THETEST_H
