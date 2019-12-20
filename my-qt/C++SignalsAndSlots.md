# Signals and Slots in Qt



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
