/*//���� ���� ����, �ּҿ� ���� ����
#include<iostream>
using namespace std;

void swap1(int a, int b) //call by value
{
	int tmp = a;
	a = b;
	b = tmp;
	//cout << "�ٲ� ��� : a = " << a << ",b=" << b << endl;
}
void swap2(int* a, int* b) //call by address
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}



int main()
{
	int m = 2, n = 9;
	swap1(m, n);
	cout << "swap1()���� �� : " << m << "."<< n << endl;
	swap2(&m, &n);
	cout << "swap2()���� �� : " << m << "." << n << endl;
	return 0;
}*/