#include<iostream>
#include"stack.h"
using namespace std;

int main()
{
	Mystack<int> iStack; //객체 생성
	int n[5];

	cout << "스택에 저장할 5개의 데이터 입력: " << endl;
	for (int i = 0; i < 5; i++)
	{

		cin >> n[i];
		iStack.push(n[i]);
	}

	cout << "스택에 저장된 데이터: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << n[i] << endl;
	}
	cout << "-------------------" << endl;

	cout << "스택에서 꺼낸 값 출력: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << iStack.pop() << endl;
	}

	cout << "-------------------------" << endl;
	cout << "값을 서로 다른 타입으로 설정하고 데이터 출력하기" << endl;
	int a; double b;
	GClass<int, double> x;
	x.set(10, 3.14);
	x.get(a, b);
	cout << "a=" << a << ",b=" << b << endl;

	return 0;
}

