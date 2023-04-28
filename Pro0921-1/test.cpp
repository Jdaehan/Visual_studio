#include<iostream>
using namespace std;
#include "Circle.h" 

int main()
{
	Circle ob1; //디폴트 생성자로 초기화
	Circle ob2(10); //인수가 있는 생성자로 초기화
	double res1 = ob1.getArea();
	double res2 = ob2.getArea();

	cout << "객체 1의 면적: " << res1 << "이다" << endl;
	cout << "객체 2의 면적: " << res2 << "이다" << endl;

	return 0;
}