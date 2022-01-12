#pragma once
#include <string>
#include <iostream>
#include "WriteLog.h"
using namespace std;

class Error
{	
protected:
	string msg;
public:
	WriteLog <string> err;
	virtual void what() = 0;
};
class NotNumber :public Error
{
public:
	NotNumber()
	{
		msg = "������! ��������� �������� �� �������� ������!\n";
	}
	virtual void what()
	{
		cout << msg;
		err.setLog("Error : ", msg);
	}
};
class NumberNull :public NotNumber
{
public:
	NumberNull()
	{
		msg = "��������� �� �������� ����������\n";
	}
	virtual void what()
	{
		cout << msg;
		err.setLog("Error: ", msg);
	}
};
