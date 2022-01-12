#include "Value.h"
#include "Error.h"
using namespace std;


Value::Value()
{
	a = (0,0);
	b = (0, 0);
	c = (0, 0);
	D = (0, 0);
	x1 = (0, 0);
	x2 = (0, 0);
}

void Value::setValue_a()
{

	bool x = true;
	while (x)
	{
		try
		{
			cout << "a = "; cin >> a;
			val.setLog("a = " , a);
			if (abs(a) < 1e-3) throw NumberNull();
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				throw NotNumber();
			}
			else
				x = false;

		}
		catch (Error & e)
		{
			e.what();
		}
	}
}
void Value::setValue_b()
{
	bool x = true;
	while (x)
	{

		try
		{
			cout << "b = "; cin >> b;
			val.setLog("b = ", b);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				throw NotNumber();
			}
			else
				x = false;

		}

		catch (Error & e)
		{
			e.what();
		}
	}
}
void Value::setValue_c()
{
	bool x = true;
	while (x)
	{

		try
		{
			cout << "c = "; cin >> c;
			val.setLog("c = ", c);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				throw NotNumber();
			}
			else
				x = false;

		}

		catch (Error & e)
		{
			e.what();
		}
	}
}
var Value::get_a()
{
	return a;
}
var Value::get_b()
{
	return b;
}
var Value::get_c()
{
	return c;
}
var Value::get_D()
{
	D = b * b - 4.0 * a * c;
	val.setLog("D = ", D.real());
	return D;
}
void Value::set_x(var i)
{
	val.setLog("x = ", i);
	x = i;
}
void Value::set_x1(var i)
{
	val.setLog("x1 = ", i);
	x1 = i;
}
void Value::set_x2(var i)
{
	val.setLog("x2 = ", i);
	x2 = i;
}
var Value::get_x()
{
	return x;
}
var Value::get_x1()
{
	return x1;
}
var Value::get_x2()
{
	return x2;
}
void Value::showLog()
{
	val.getLog();
}