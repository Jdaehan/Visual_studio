/*//객체의 동적 생성과 반환 - p. 178 작성-20191450 장대한
#include<iostream>
using namespace std;
//클래스
class Circle
{
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	~Circle() { cout << "소멸자 실행!" << endl; }
	void setRadius(int a) { radius = a; }
	double getArea() { return 3.14 * radius * radius; }
};
int main()
{
	Circle* pArray = new Circle[3]; //객체배열선언
	int n;
	//객체배열값 초기화
	for (int i = 0; i < 3; i++)
	{
		cout << "초기값 입력:"; cin >> n;
		pArray[i].setRadius(n);
	}
	//초기화된 반지름 값을 이용해 면적 출력
	for (int i = 0; i < 3; i++)
	{
		cout << "pArray[" << i << "]의 면적 = " << pArray[i].getArea() << endl;
		cout << "pArray[" << i << "]의 주소 = " << &pArray[i] << endl;
	}

	delete[] pArray; //객체배열 반환

	//Circle* p = new Circle;
	//Circle* q = new Circle(30);
	//cout << p->getArea() << endl << q->getArea() << endl;
	//delete p;
	//delete q;

	return 0;
}*/