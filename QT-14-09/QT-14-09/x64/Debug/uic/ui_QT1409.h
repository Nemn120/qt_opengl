/********************************************************************************
** Form generated from reading UI file 'QT1409.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT1409_H
#define UI_QT1409_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT1409Class
{
public:
    QWidget *centralWidget;
    QOpenGLWidget *openGLWidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rotationXLabel;
    QSlider *rotationX;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *rotationYLabel;
    QSlider *rotationY;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rotationZLabel;
    QSlider *rotationZ;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *scaleLabel;
    QSlider *scale;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QRadioButton *conoBtn;
    QRadioButton *cilindroBtn;
    QRadioButton *cuboBtn;
    QLabel *label_11;
    QLabel *selectSolidLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QT1409Class)
    {
        if (QT1409Class->objectName().isEmpty())
            QT1409Class->setObjectName(QString::fromUtf8("QT1409Class"));
        QT1409Class->resize(855, 648);
        centralWidget = new QWidget(QT1409Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(9, 10, 650, 650));
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(690, 320, 151, 271));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rotationXLabel = new QLabel(verticalLayoutWidget_3);
        rotationXLabel->setObjectName(QString::fromUtf8("rotationXLabel"));
        rotationXLabel->setMinimumSize(QSize(20, 0));
        rotationXLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(rotationXLabel);

        rotationX = new QSlider(verticalLayoutWidget_3);
        rotationX->setObjectName(QString::fromUtf8("rotationX"));
        rotationX->setMinimum(-359);
        rotationX->setMaximum(359);
        rotationX->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rotationX);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rotationYLabel = new QLabel(verticalLayoutWidget_3);
        rotationYLabel->setObjectName(QString::fromUtf8("rotationYLabel"));
        rotationYLabel->setMinimumSize(QSize(20, 0));
        rotationYLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(rotationYLabel);

        rotationY = new QSlider(verticalLayoutWidget_3);
        rotationY->setObjectName(QString::fromUtf8("rotationY"));
        rotationY->setMinimum(-359);
        rotationY->setMaximum(359);
        rotationY->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(rotationY);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rotationZLabel = new QLabel(verticalLayoutWidget_3);
        rotationZLabel->setObjectName(QString::fromUtf8("rotationZLabel"));
        rotationZLabel->setMinimumSize(QSize(20, 0));
        rotationZLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(rotationZLabel);

        rotationZ = new QSlider(verticalLayoutWidget_3);
        rotationZ->setObjectName(QString::fromUtf8("rotationZ"));
        rotationZ->setMinimum(-359);
        rotationZ->setMaximum(359);
        rotationZ->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(rotationZ);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scaleLabel = new QLabel(verticalLayoutWidget_3);
        scaleLabel->setObjectName(QString::fromUtf8("scaleLabel"));
        scaleLabel->setMinimumSize(QSize(20, 0));
        scaleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(scaleLabel);

        scale = new QSlider(verticalLayoutWidget_3);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimum(10);
        scale->setMaximum(200);
        scale->setOrientation(Qt::Horizontal);
        scale->setTickInterval(0);

        horizontalLayout_2->addWidget(scale);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayoutWidget_7 = new QWidget(centralWidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(690, 60, 151, 31));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_10);

        verticalLayoutWidget_8 = new QWidget(centralWidget);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(689, 100, 151, 151));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAcceptDrops(false);
        conoBtn = new QRadioButton(groupBox);
        conoBtn->setObjectName(QString::fromUtf8("conoBtn"));
        conoBtn->setGeometry(QRect(20, 80, 82, 17));
        cilindroBtn = new QRadioButton(groupBox);
        cilindroBtn->setObjectName(QString::fromUtf8("cilindroBtn"));
        cilindroBtn->setGeometry(QRect(20, 50, 82, 17));
        cuboBtn = new QRadioButton(groupBox);
        cuboBtn->setObjectName(QString::fromUtf8("cuboBtn"));
        cuboBtn->setGeometry(QRect(20, 20, 82, 17));
        cuboBtn->setChecked(true);

        verticalLayout_8->addWidget(groupBox);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(690, 20, 151, 31));
        QFont font2;
        font2.setPointSize(13);
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);
        selectSolidLabel = new QLabel(centralWidget);
        selectSolidLabel->setObjectName(QString::fromUtf8("selectSolidLabel"));
        selectSolidLabel->setGeometry(QRect(700, 260, 131, 31));
        selectSolidLabel->setFont(font);
        QT1409Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QT1409Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 855, 21));
        QT1409Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QT1409Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QT1409Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QT1409Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QT1409Class->setStatusBar(statusBar);

        retranslateUi(QT1409Class);

        QMetaObject::connectSlotsByName(QT1409Class);
    } // setupUi

    void retranslateUi(QMainWindow *QT1409Class)
    {
        QT1409Class->setWindowTitle(QCoreApplication::translate("QT1409Class", "QT1409", nullptr));
        label_4->setText(QCoreApplication::translate("QT1409Class", "CAMARA", nullptr));
        label_7->setText(QCoreApplication::translate("QT1409Class", "Rotacion X", nullptr));
        rotationXLabel->setText(QCoreApplication::translate("QT1409Class", "0", nullptr));
        label_5->setText(QCoreApplication::translate("QT1409Class", "Rotacion Y", nullptr));
        rotationYLabel->setText(QCoreApplication::translate("QT1409Class", "0", nullptr));
        label_8->setText(QCoreApplication::translate("QT1409Class", "Rotacion Z", nullptr));
        rotationZLabel->setText(QCoreApplication::translate("QT1409Class", "0", nullptr));
        label_6->setText(QCoreApplication::translate("QT1409Class", "Escala", nullptr));
        scaleLabel->setText(QCoreApplication::translate("QT1409Class", "1", nullptr));
        label_10->setText(QCoreApplication::translate("QT1409Class", "SOLIDO", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QT1409Class", "Seleccione una figura", nullptr));
        conoBtn->setText(QCoreApplication::translate("QT1409Class", "Cono", nullptr));
        cilindroBtn->setText(QCoreApplication::translate("QT1409Class", "Cilindro", nullptr));
        cuboBtn->setText(QCoreApplication::translate("QT1409Class", "Cubo", nullptr));
        label_11->setText(QCoreApplication::translate("QT1409Class", "QT+OPENGL", nullptr));
        selectSolidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QT1409Class: public Ui_QT1409Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT1409_H
