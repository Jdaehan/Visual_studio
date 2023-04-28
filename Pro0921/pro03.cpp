//인라인 함수 개념 이해, 클래스 멤버 함수는 인라인 함수이다. 20191450 장대한
#include<iostream>
using namespace std;

//함수
inline int odd(int x)
{
	return (x % 2);
}

///* int main()
//{
//	int sum = 0;
//
//	for (int i = 1; i < 100; i++)
//	{
//		if (odd(i))
//			sum = sum + i;
//	}
//
//	cout << "1-100사이 홀수 합:" << sum << endl;
//
//	return 0;
//}*/