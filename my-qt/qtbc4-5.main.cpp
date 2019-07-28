#include <QCoreApplication>
#include <QDebug>

enum Colors {black, red, green, blue};

// Precursor to "classes"
struct product
{
    int weight;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop;
    qInfo() << "size of product: " << sizeof (laptop);
    return a.exec();
}
