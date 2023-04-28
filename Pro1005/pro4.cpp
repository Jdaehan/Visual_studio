//��ü ���� - call by value, call by address
#include<iostream>
using namespace std;

class Circle
{
	//�������
private:
	int radius;
public:
	//����Լ�
	Circle() //����Ʈ ������, �����ڴ� ��ü �ʱ�ȭ�ϴ� Ư���� �Լ�
	{
		radius = 1; 
		cout << "������ ���� radius�� = " << radius << endl;
	}
	Circle(int radius) //�μ��� �ִ� ������
	{
		this->radius = radius;
		cout << "������ ���� radius�� = " << this->radius << endl;
	}
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

//�Ϲ��Լ�
void increase(Circle c)
{
	int r = c.getRadius();
	c.setRadius(r + 1);
	//cout << "������ increase�Լ��� ������ ��: " << c.getRadius() << endl;
}

void pin(Circle* p)
{
	int r = p->getRadius();
	p->setRadius(r + 1);
}

Circle getCircle()
{
	Circle tmp(10);
	return tmp; //��ü ����
}


int main()
{
	Circle waffle(30);
	increase(waffle); //�Լ��μ��� ��ü�� ����
	cout << "������ �Լ� increase ȣ�� �� ���� ������ �� : " << waffle.getRadius() << endl;
	Circle c;
	c = getCircle();
	waffle = c; //���� ���� ������ �ٲ���? 10���� �ٲ����!
	pin(&waffle);
	cout << "������ �Լ� pinȣ�� �� ���� ������ �� : " << waffle.getRadius() << endl;

	return 0;
}