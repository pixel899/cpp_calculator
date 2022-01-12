#include <iostream>
#include <windows.h>
#include "Dialog.h"
using namespace std;



int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Dialog d;
	d.menu();

	system("pause");
	return 0;
}