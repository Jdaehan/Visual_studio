#include<iostream>
#include"stack.h"
using namespace std;

int main()
{
	Mystack<int> iStack; //��ü ����
	int n[5];

	cout << "���ÿ� ������ 5���� ������ �Է�: " << endl;
	for (int i = 0; i < 5; i++)
	{

		cin >> n[i];
		iStack.push(n[i]);
	}

	cout << "���ÿ� ����� ������: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << n[i] << endl;
	}
	cout << "-------------------" << endl;

	cout << "���ÿ��� ���� �� ���: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << iStack.pop() << endl;
	}

	cout << "-------------------------" << endl;
	cout << "���� ���� �ٸ� Ÿ������ �����ϰ� ������ ����ϱ�" << endl;
	int a; double b;
	GClass<int, double> x;
	x.set(10, 3.14);
	x.get(a, b);
	cout << "a=" << a << ",b=" << b << endl;

	return 0;
}

