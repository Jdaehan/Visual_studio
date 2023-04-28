//객체 전달 - call by value, call by address
#include<iostream>
using namespace std;

class Circle
{
	//멤버변수
private:
	int radius;
public:
	//멤버함수
	Circle() //디폴트 생성자, 생성자는 객체 초기화하는 특별한 함수
	{
		radius = 1; 
		cout << "생성자 실행 radius값 = " << radius << endl;
	}
	Circle(int radius) //인수가 있는 생성자
	{
		this->radius = radius;
		cout << "생성자 실행 radius값 = " << this->radius << endl;
	}
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

//일반함수
void increase(Circle c)
{
	int r = c.getRadius();
	c.setRadius(r + 1);
	//cout << "와플의 increase함수내 반지름 값: " << c.getRadius() << endl;
}

void pin(Circle* p)
{
	int r = p->getRadius();
	p->setRadius(r + 1);
}

Circle getCircle()
{
	Circle tmp(10);
	return tmp; //객체 리턴
}


int main()
{
	Circle waffle(30);
	increase(waffle); //함수인수로 객체를 전달
	cout << "와플의 함수 increase 호출 후 현재 반지름 값 : " << waffle.getRadius() << endl;
	Circle c;
	c = getCircle();
	waffle = c; //와플 값이 몇으로 바뀔까요? 10으로 바뀌겠죠!
	pin(&waffle);
	cout << "와플의 함수 pin호출 후 현재 반지름 값 : " << waffle.getRadius() << endl;

	return 0;
}