#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT1409.h"
#include <QtCore\qvariant.h>
#include <glfw3.h>


class QT1409 : public QMainWindow
{
    Q_OBJECT

public:
    QT1409(QWidget *parent = Q_NULLPTR);
private:
    void initConnect();

private slots:
    void rotationX(int);
    void rotationY(int);
    void rotationZ(int);
    void scale(int);
    void cube();
    void cilinder();
    void cono();

   
private:
    Ui::QT1409Class ui;

};
