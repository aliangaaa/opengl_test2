/********************************************************************************
** Form generated from reading UI file 'TheLighting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THELIGHTING_H
#define UI_THELIGHTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GLBasicLighting.h"
#include "GLColors.h"
#include "GLDirectionalLight.h"
#include "GLLightingMap.h"
#include "GLMaterial.h"
#include "GLMultipleLights.h"
#include "GLPointLight.h"
#include "GLSpotLight.h"

QT_BEGIN_NAMESPACE

class Ui_TheLighting
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabColors;
    QVBoxLayout *verticalLayout_2;
    GLColors *colors;
    QWidget *tabLighting;
    QVBoxLayout *verticalLayout_3;
    GLBasicLighting *lighting;
    QWidget *tabMaterial;
    QVBoxLayout *verticalLayout_4;
    GLMaterial *material;
    QWidget *tabLightingMap;
    QVBoxLayout *verticalLayout_5;
    GLLightingMap *lightingMap;
    QWidget *tabDirectional;
    QVBoxLayout *verticalLayout_6;
    GLDirectionalLight *directional;
    QWidget *tabPoint;
    QVBoxLayout *verticalLayout_7;
    GLPointLight *point;
    QWidget *tabSpot;
    QVBoxLayout *verticalLayout_8;
    GLSpotLight *spot;
    QWidget *tabMultiLights;
    QVBoxLayout *verticalLayout_9;
    GLMultipleLights *openGLWidget;

    void setupUi(QWidget *TheLighting)
    {
        if (TheLighting->objectName().isEmpty())
            TheLighting->setObjectName(QString::fromUtf8("TheLighting"));
        TheLighting->resize(624, 451);
        verticalLayout = new QVBoxLayout(TheLighting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(TheLighting);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabColors = new QWidget();
        tabColors->setObjectName(QString::fromUtf8("tabColors"));
        verticalLayout_2 = new QVBoxLayout(tabColors);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        colors = new GLColors(tabColors);
        colors->setObjectName(QString::fromUtf8("colors"));

        verticalLayout_2->addWidget(colors);

        tabWidget->addTab(tabColors, QString());
        tabLighting = new QWidget();
        tabLighting->setObjectName(QString::fromUtf8("tabLighting"));
        verticalLayout_3 = new QVBoxLayout(tabLighting);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lighting = new GLBasicLighting(tabLighting);
        lighting->setObjectName(QString::fromUtf8("lighting"));

        verticalLayout_3->addWidget(lighting);

        tabWidget->addTab(tabLighting, QString());
        tabMaterial = new QWidget();
        tabMaterial->setObjectName(QString::fromUtf8("tabMaterial"));
        verticalLayout_4 = new QVBoxLayout(tabMaterial);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        material = new GLMaterial(tabMaterial);
        material->setObjectName(QString::fromUtf8("material"));

        verticalLayout_4->addWidget(material);

        tabWidget->addTab(tabMaterial, QString());
        tabLightingMap = new QWidget();
        tabLightingMap->setObjectName(QString::fromUtf8("tabLightingMap"));
        verticalLayout_5 = new QVBoxLayout(tabLightingMap);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lightingMap = new GLLightingMap(tabLightingMap);
        lightingMap->setObjectName(QString::fromUtf8("lightingMap"));

        verticalLayout_5->addWidget(lightingMap);

        tabWidget->addTab(tabLightingMap, QString());
        tabDirectional = new QWidget();
        tabDirectional->setObjectName(QString::fromUtf8("tabDirectional"));
        verticalLayout_6 = new QVBoxLayout(tabDirectional);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        directional = new GLDirectionalLight(tabDirectional);
        directional->setObjectName(QString::fromUtf8("directional"));

        verticalLayout_6->addWidget(directional);

        tabWidget->addTab(tabDirectional, QString());
        tabPoint = new QWidget();
        tabPoint->setObjectName(QString::fromUtf8("tabPoint"));
        verticalLayout_7 = new QVBoxLayout(tabPoint);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        point = new GLPointLight(tabPoint);
        point->setObjectName(QString::fromUtf8("point"));

        verticalLayout_7->addWidget(point);

        tabWidget->addTab(tabPoint, QString());
        tabSpot = new QWidget();
        tabSpot->setObjectName(QString::fromUtf8("tabSpot"));
        verticalLayout_8 = new QVBoxLayout(tabSpot);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        spot = new GLSpotLight(tabSpot);
        spot->setObjectName(QString::fromUtf8("spot"));

        verticalLayout_8->addWidget(spot);

        tabWidget->addTab(tabSpot, QString());
        tabMultiLights = new QWidget();
        tabMultiLights->setObjectName(QString::fromUtf8("tabMultiLights"));
        verticalLayout_9 = new QVBoxLayout(tabMultiLights);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        openGLWidget = new GLMultipleLights(tabMultiLights);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        verticalLayout_9->addWidget(openGLWidget);

        tabWidget->addTab(tabMultiLights, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TheLighting);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(TheLighting);
    } // setupUi

    void retranslateUi(QWidget *TheLighting)
    {
        TheLighting->setWindowTitle(QCoreApplication::translate("TheLighting", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabColors), QCoreApplication::translate("TheLighting", "Colors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLighting), QCoreApplication::translate("TheLighting", "Lighting", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMaterial), QCoreApplication::translate("TheLighting", "Material", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLightingMap), QCoreApplication::translate("TheLighting", "LightingMap", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDirectional), QCoreApplication::translate("TheLighting", "Directional", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPoint), QCoreApplication::translate("TheLighting", "Point", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSpot), QCoreApplication::translate("TheLighting", "Spot", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMultiLights), QCoreApplication::translate("TheLighting", "MultiLights", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheLighting: public Ui_TheLighting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THELIGHTING_H
