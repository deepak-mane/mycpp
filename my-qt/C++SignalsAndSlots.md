# Signals and Slots in Qt

Connecting Signals to Slots: 3 Different Ways

## String Notation
```cpp
/* String Notation          */
   connect(ui->pushButton,SIGNAL(clicked()),
          this,SLOT(changeText()));
```

## Functor Notation
```cpp
    /*Functor Nototation :  Regular slots */
    connect(ui->pushButton,&QPushButton::clicked,
            this,&Widget::changeText);

```

## Functor Lambda Notation
```cpp
    /*Functor Nototation :  Lambdas */
    connect(ui->pushButton,&QPushButton::clicked,
            [=](){ui->label->setText("Lambda");}
            );
```
```cpp
#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
/* String Notation
   connect(ui->pushButton,SIGNAL(clicked()),
          this,SLOT(changeText()));
          */
    /*Functor Nototation :  Regular slots
    connect(ui->pushButton,&QPushButton::clicked,
            this,&Widget::changeText);
     */

    /*Functor Nototation :  Lambdas */
    connect(ui->pushButton,&QPushButton::clicked,
            [=](){ui->label->setText("Lambda");}
            );


}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User Clicked on the button";
    ui->label->setText("Hello there");
}
```
![Alt text](./images/Qt_SignalsAndSlots.PNG?raw=true "Title")
```cpp
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*String notation
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));
    */

    /* Functor Notation : Normal Slots

    connect(ui->horizontalSlider,&QSlider::valueChanged,
            ui->progressBar,&QProgressBar::setValue);
    */

    /* Functor Notation : Lambdas */

    connect(ui->horizontalSlider,&QSlider::valueChanged,
            [=](){ui->progressBar->setValue(ui->horizontalSlider->value());}
            );
}

Widget::~Widget()
{
    delete ui;
}
```
