/********************************************************************************
** Form generated from reading UI file 'TheBasic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEBASIC_H
#define UI_THEBASIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GLCamera.h"
#include "GLCoordinate.h"
#include "GLElement.h"
#include "GLTexture.h"
#include "GLTexture330.h"
#include "GLTextureQt.h"
#include "GLTextureUnit.h"
#include "GLTransform.h"
#include "GLTriangle.h"
#include "GLTriangle330.h"
#include "GLTriangleQt.h"

QT_BEGIN_NAMESPACE

class Ui_TheBasic
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabTriangle;
    QGridLayout *gridLayout;
    GLTriangle *triangle;
    GLTriangle330 *triangle330;
    GLTriangleQt *triangleQt;
    GLElement *element;
    QWidget *tabTexture;
    QGridLayout *gridLayout_2;
    GLTexture *texture;
    GLTexture330 *texture330;
    GLTextureQt *textureQt;
    GLTextureUnit *textureUnit;
    QWidget *tabTransform;
    QVBoxLayout *verticalLayout_2;
    GLTransform *transform;
    QWidget *tabCoordinate;
    QVBoxLayout *verticalLayout_3;
    GLCoordinate *coordinate;
    QWidget *tabCamera;
    QVBoxLayout *verticalLayout_5;
    GLCamera *camera;

    void setupUi(QWidget *TheBasic)
    {
        if (TheBasic->objectName().isEmpty())
            TheBasic->setObjectName(QString::fromUtf8("TheBasic"));
        TheBasic->resize(798, 546);
        verticalLayout = new QVBoxLayout(TheBasic);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(TheBasic);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabTriangle = new QWidget();
        tabTriangle->setObjectName(QString::fromUtf8("tabTriangle"));
        gridLayout = new QGridLayout(tabTriangle);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        triangle = new GLTriangle(tabTriangle);
        triangle->setObjectName(QString::fromUtf8("triangle"));

        gridLayout->addWidget(triangle, 0, 0, 1, 1);

        triangle330 = new GLTriangle330(tabTriangle);
        triangle330->setObjectName(QString::fromUtf8("triangle330"));

        gridLayout->addWidget(triangle330, 0, 1, 1, 1);

        triangleQt = new GLTriangleQt(tabTriangle);
        triangleQt->setObjectName(QString::fromUtf8("triangleQt"));

        gridLayout->addWidget(triangleQt, 1, 0, 1, 1);

        element = new GLElement(tabTriangle);
        element->setObjectName(QString::fromUtf8("element"));

        gridLayout->addWidget(element, 1, 1, 1, 1);

        tabWidget->addTab(tabTriangle, QString());
        tabTexture = new QWidget();
        tabTexture->setObjectName(QString::fromUtf8("tabTexture"));
        gridLayout_2 = new QGridLayout(tabTexture);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        texture = new GLTexture(tabTexture);
        texture->setObjectName(QString::fromUtf8("texture"));

        gridLayout_2->addWidget(texture, 0, 0, 1, 1);

        texture330 = new GLTexture330(tabTexture);
        texture330->setObjectName(QString::fromUtf8("texture330"));

        gridLayout_2->addWidget(texture330, 0, 1, 1, 1);

        textureQt = new GLTextureQt(tabTexture);
        textureQt->setObjectName(QString::fromUtf8("textureQt"));

        gridLayout_2->addWidget(textureQt, 1, 0, 1, 1);

        textureUnit = new GLTextureUnit(tabTexture);
        textureUnit->setObjectName(QString::fromUtf8("textureUnit"));

        gridLayout_2->addWidget(textureUnit, 1, 1, 1, 1);

        tabWidget->addTab(tabTexture, QString());
        tabTransform = new QWidget();
        tabTransform->setObjectName(QString::fromUtf8("tabTransform"));
        verticalLayout_2 = new QVBoxLayout(tabTransform);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        transform = new GLTransform(tabTransform);
        transform->setObjectName(QString::fromUtf8("transform"));

        verticalLayout_2->addWidget(transform);

        tabWidget->addTab(tabTransform, QString());
        tabCoordinate = new QWidget();
        tabCoordinate->setObjectName(QString::fromUtf8("tabCoordinate"));
        verticalLayout_3 = new QVBoxLayout(tabCoordinate);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        coordinate = new GLCoordinate(tabCoordinate);
        coordinate->setObjectName(QString::fromUtf8("coordinate"));

        verticalLayout_3->addWidget(coordinate);

        tabWidget->addTab(tabCoordinate, QString());
        tabCamera = new QWidget();
        tabCamera->setObjectName(QString::fromUtf8("tabCamera"));
        verticalLayout_5 = new QVBoxLayout(tabCamera);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        camera = new GLCamera(tabCamera);
        camera->setObjectName(QString::fromUtf8("camera"));

        verticalLayout_5->addWidget(camera);

        tabWidget->addTab(tabCamera, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TheBasic);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(TheBasic);
    } // setupUi

    void retranslateUi(QWidget *TheBasic)
    {
        TheBasic->setWindowTitle(QCoreApplication::translate("TheBasic", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTriangle), QCoreApplication::translate("TheBasic", "Triangle", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTexture), QCoreApplication::translate("TheBasic", "Texture", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTransform), QCoreApplication::translate("TheBasic", "Transform", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCoordinate), QCoreApplication::translate("TheBasic", "Coordinate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCamera), QCoreApplication::translate("TheBasic", "Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheBasic: public Ui_TheBasic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBASIC_H
