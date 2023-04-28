//정의된 클래스 멤버함수 구현 부분
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