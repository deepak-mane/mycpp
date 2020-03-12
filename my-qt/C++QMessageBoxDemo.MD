# C++ QMessageBox

```cpp
# widget.cpp
#include "widget.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * button = new QPushButton(this);
    button->setText("Click Me");
    button->move(200,200);
    connect(button,&QPushButton::clicked,
            [=](){
        QMessageBox message;
        message.setWindowTitle("Message Title");
        message.setText("Something Happened ...");
        message.setInformativeText("Do you want to do something about it?");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        message.exec();
    });
}

Widget::~Widget()
{
}

```
