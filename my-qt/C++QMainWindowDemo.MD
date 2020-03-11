# C++ QMainWindow Class

```cpp
#include "mainwindow.h"
#include <QPushButton>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QDebug>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //Add central widget
    QPushButton * button = new QPushButton("Hello",this);
    setCentralWidget(button);

    //Declare Quti Action
    QAction * quitAction = new QAction("Quit");
    connect(quitAction,&QAction::triggered,
            [=](){
        QApplication::quit();
    });

    //Add menus
    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("File");
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Tools");
    menuBar()->addMenu("Preferences");
    menuBar()->addMenu("Help");



    //Add status bar message
    statusBar()->showMessage("Uploading file...", 3000);
    //statusBar()->clearMessage();
}

MainWindow::~MainWindow()
{
}


```
