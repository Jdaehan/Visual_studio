//���ǵ� Ŭ���� ����Լ� ���� �κ�
#include<iostream>
using namespace std;
#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}
Circle::Circle(int r)
{
	radius = r;
}

double Circle::getArea()
{
	double res = (double)(radius * (double)radius) * 3.14;;
	return res;
}