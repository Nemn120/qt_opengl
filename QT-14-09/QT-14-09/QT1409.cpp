#include "QT1409.h"
#include <QMessageBox>
#include <libs.h>

QT1409::QT1409(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    initConnect();
}


void QT1409::initConnect() {
    glewInit();

    
    connect(ui.rotationX, SIGNAL(valueChanged(int)), this, SLOT(rotationX(int)));
    connect(ui.rotationY, SIGNAL(valueChanged(int)), this, SLOT(rotationY(int)));
    connect(ui.rotationZ, SIGNAL(valueChanged(int)), this, SLOT(rotationZ(int)));
    connect(ui.scale, SIGNAL(valueChanged(int)), this, SLOT(scale(int)));

    connect(ui.cuboBtn, SIGNAL(clicked(bool)), this, SLOT(cube()));
    connect(ui.cilindroBtn, SIGNAL(clicked(bool)), this, SLOT(cilinder()));
    connect(ui.conoBtn, SIGNAL(clicked(bool)), this, SLOT(cono()));
}

void QT1409::cube() {

    ui.selectSolidLabel->setText(ui.cuboBtn->text());
}
void QT1409::cilinder() {
    ui.selectSolidLabel->setText(ui.cilindroBtn->text());
}
void QT1409::cono() {
    ui.selectSolidLabel->setText(ui.conoBtn->text());
}



void QT1409::rotationX(int value) { 
    ui.rotationXLabel->setText(QString::number(value));
}

void QT1409::rotationY(int value) {
    ui.rotationYLabel->setText(QString::number(value));
}

void QT1409::rotationZ(int value) {
    ui.rotationZLabel->setText(QString::number(value));
}

void QT1409::scale(int value) {
    float valueScale=(value / 100.0);
    ui.scaleLabel->setText(QString::number(valueScale,'f',2));
}


