#include "stdafx.h"
#include "qtwidgetsapplication1.h"
#include <QtWidgets/QApplication>

using namespace std;
#include <iostream>

int main(int argc, char *argv[])
{
	cout << "main函数开始执行！" << endl;
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}
