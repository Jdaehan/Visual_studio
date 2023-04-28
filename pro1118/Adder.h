#pragma once

class Ba
{
public:
	int a, b;
};
class Adder : virtual public Ba
{
protected:
	int add(int a, int b) { return a + b; }
};
