#pragma once
#include <iostream>
#include <complex>
#include "WriteLog.h"
using namespace std;

typedef complex<double> var;
class Value
{
private:
	var a, b, c, D, x, x1, x2;
public:
	Value();
	WriteLog<var> val;
	void setValue_a();
	void setValue_b();
	void setValue_c();
	var get_D();
	var get_a();
	var get_b();
	var get_c();
	var get_x();
	var get_x1();
	var get_x2();
	void set_x(var);
	void set_x1(var);
	void set_x2(var);
	void showLog();
};
