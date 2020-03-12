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



|Constant|Value|Description|
|---|---|---|
|QMessageBox::Ok|0x00000400|An "OK" button defined with the AcceptRole.|
|QMessageBox::Open|0x00002000|An "Open" button defined with the AcceptRole.
|QMessageBox::Save|0x00000800|A "Save" button defined with the AcceptRole.|
|QMessageBox::Cancel|0x00400000|A "Cancel" button defined with the RejectRole.|
|QMessageBox::Close|0x00200000|A "Close" button defined with the RejectRole.|
|QMessageBox::Discard|0x00800000|A "Discard" or "Don't Save" button, depending on the platform, defined with the DestructiveRole.|
|QMessageBox::Apply|0x02000000|An "Apply" button defined with the ApplyRole.|
|QMessageBox::Reset|0x04000000|A "Reset" button defined with the ResetRole.|
|QMessageBox::RestoreDefaults|0x08000000|A "Restore Defaults" button defined with the ResetRole.|
|QMessageBox::Help|0x01000000|A "Help" button defined with the HelpRole.|
|QMessageBox::SaveAll|0x00001000|A "Save All" button defined with the AcceptRole.|
|QMessageBox::Yes|0x00004000|A "Yes" button defined with the YesRole.|
|QMessageBox::YesToAll|0x00008000|A "Yes to All" button defined with the YesRole.|
|QMessageBox::No|0x00010000|A "No" button defined with the NoRole.|
|QMessageBox::NoToAll|0x00020000|A "No to All" button defined with the NoRole.|
|QMessageBox::Abort|0x00040000|An "Abort" button defined with the RejectRole.|
|QMessageBox::Retry|0x00080000|A "Retry" button defined with the AcceptRole.|
|QMessageBox::Ignore|0x00100000|An "Ignore" button defined with the AcceptRole.v
|QMessageBox::NoButton|0x00000000|An invalid button.|


