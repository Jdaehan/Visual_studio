#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
//클래스를 헤더파일에 정의 - 제작 20191450 장대한

class Circle
{
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

#endif