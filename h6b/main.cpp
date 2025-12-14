#include <QCoreApplication>
#include <exampleclass.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass objectExample1;
    objectExample1.startToWait();

    return a.exec();
}
