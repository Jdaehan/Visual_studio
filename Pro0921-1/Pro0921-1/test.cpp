#include<iostream>
using namespace std;
#include "Circle.h" 

int main()
{
	Circle ob1; //����Ʈ �����ڷ� �ʱ�ȭ
	Circle ob2(10); //�μ��� �ִ� �����ڷ� �ʱ�ȭ
	double res1 = ob1.getArea();
	double res2 = ob2.getArea();

	cout << "��ü 1�� ����: " << res1 << "�̴�" << endl;
	cout << "��ü 2�� ����: " << res2 << "�̴�" << endl;

	return 0;
}