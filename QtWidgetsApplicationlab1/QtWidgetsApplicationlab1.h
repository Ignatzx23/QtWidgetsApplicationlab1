#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplicationlab1.h"

class QtWidgetsApplicationlab1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplicationlab1(QWidget *parent = nullptr);
    ~QtWidgetsApplicationlab1();

private:
    Ui::QtWidgetsApplicationlab1Class ui;
};
