#pragma once
#include <fstream>
using namespace std;

template <class T>
class WriteLog
{
public:
	void setLog(string,T);
	void getLog();
};
template <class T>
void WriteLog<T>::setLog(string x,T y)
{
		ofstream stream("log.txt", ios::app);
		if (!stream.is_open())
		{
			cout<< "\nфайл log.txt для записи протокола работы не может быть открыт\n";
		}
		else
		stream << x << y << endl;
}
template <class T>
void WriteLog<T>::getLog()
{
	ifstream stream("log.txt");
	if (!stream.is_open())
	{
		cout << "\nфайл log.txt не может быть открыт\n";
	}
	else
		system("log.txt");
}
