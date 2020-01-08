# Signals and Slots in Qt

Connecting Signals to Slots: 3 Different Ways

## String Notation
```cpp
connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(changeText()));
```

## Functor Notation
```cpp
connect(ui->pushButton,QPushButton::clicked,this,&MyWidget::changeText);
```

## Functor Lambda Notation
```cpp
connect(ui->pushButton,QPushButton::clicked,[=]{
        ui->label->setText("Get Lost");
});
```
![Alt text](../images/Qt_SignalsAndSlots.PNG?raw=true "Title")
```cpp
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    //String notation
//    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
//            ui->progressBar,SLOT(setValue(int)));

//    //Functor Notation : Normal Slots
//    connect(ui->horizontalSlider,&QSlider::valueChanged,
//            ui->progressBar,&QProgressBar::setValue);

//     //Functor Notation : Lambda
    connect(ui->horizontalSlider,&QSlider::valueChanged,
            [=] (){
            ui->progressBar->setValue(ui->horizontalSlider->value());
    });
}

Widget::~Widget()
{
    delete ui;
}



```
