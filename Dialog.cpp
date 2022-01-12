#include "Dialog.h"
#include <fstream>
using namespace std;

void Dialog::menu()
{
	fstream stream("log.txt", ios::out | ios::in | ios::trunc);
	int w;
	do
	{
		cout << "\n����";
		cout << "\nax^2+bx+c=0";
		cout << "\n1. ������ �������� ����������.";
		cout << "\n2. ������� ��������� �� �����.";
		cout << "\n3. ����������� ������ ���������.";
		cout << "\n0. �����.";
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
