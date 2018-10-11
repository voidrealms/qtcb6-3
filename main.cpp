#include <QCoreApplication>

#include <iostream>
#include <QDebug>

using namespace std;

// ternary opeator

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Please enter your age:";
    cin >> age;

    age > 0 && age < 110 ? qInfo("You entered a valid age") : qFatal("You did not enter a valid age");

    return a.exec();
}
