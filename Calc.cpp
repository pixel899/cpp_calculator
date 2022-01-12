#include "Calc.h"
using namespace std;

Calc::Calc()
{
	i = 0;
}
void Calc::set_abc()
{
	x.setValue_a();
	x.setValue_b();
	x.setValue_c();
}
void Calc::roots()
{
	resD = x.get_D();
	if (abs(resD) < 1E-3)
	{
		x.set_x(((-x.get_b()) / (2.0 * x.get_a().real())));
		i =  1;
	}
	else
	{
		x.set_x1( (-x.get_b() - sqrt(resD)) / (2.0 * x.get_a()));
		x.set_x2( (-x.get_b() + sqrt(resD)) / (2.0 * x.get_a()));
		i =  2;
	}
}
void Calc::print()
{
	cout << x.get_a() << "x^2+" << x.get_b() << "x+" << x.get_c() << "=0\n";
	cout << "D = " << resD.real() << endl;
	if (i == 0)
	{
		cout << "x1 = 0\n";
		cout << "x2 = 0\n";
	}
	if (i == 1) cout << "\nx = " << x.get_x();
	if (i == 2)
	{
		if (fabs(x.get_x1().imag()) < 1E-6) cout << "x1 = " << x.get_x1().real();
		else cout << "x1 = " << x.get_x1();
		if (fabs(x.get_x2().imag()) < 1E-6) cout << "\nx2 = " << x.get_x2().real() << endl; 
		else cout << "\nx2 = " << x.get_x2()<< endl;
	}
}
void Calc::show()
{
	x.showLog();
}