#pragma once
#include "Adder.h"
#include "Sub.h"

class Calculator : virtual public Adder, virtual public Substract
{
public:
	int cals(char op, int a, int b)
	{
		int res = 0;
		switch (op)
		{
		case '+': res = add(a, b); break;
		case '-': res = sub(a, b); break;
		}
		return res;
	}
};