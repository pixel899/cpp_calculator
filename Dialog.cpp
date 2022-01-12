#include "Dialog.h"
#include <fstream>
using namespace std;

void Dialog::menu()
{
	fstream stream("log.txt", ios::out | ios::in | ios::trunc);
	int w;
	do
	{
		cout << "\nМеню";
		cout << "\nax^2+bx+c=0";
		cout << "\n1. Ввести значения переменных.";
		cout << "\n2. Вывести результат на экран.";
		cout << "\n3. Просмотреть работу протокола.";
		cout << "\n0. Выход.";
		cout << endl<<endl;
		cin >> w;
		cout << endl;

		switch (w)
		{
		case 1:
			m.set_abc();
			m.roots();
			break;
		case 2:
			m.print();
			break;
		case 3:
			stream.close();
			m.show();
			break;
		}
	} while (w != 0);
}
