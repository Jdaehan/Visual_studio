//생성자, 소멸자 - 20191450 장대한
#include<iostream>
using namespace std;

class Circle
{
	//멤버변수
	int r;
	//멤버함수
public:
	void getArea()
	{
		cout << "반지름:" << r << "인" << endl;
		double res = (double)r * (double)r * 3.14;
		cout << "원의 넓이: " << res << endl;
	}
	//생성자 - 클래스 이름과 똑같아야하고 리턴타입이 없다
	Circle() //디폴트 생성자
	{
		r = 1; //반지름 값의 초기값 1로 정함
	}
	Circle(int radius) //인수가 있는 생성자
	{
		r = radius;
	}
	//소멸자
	~Circle()
	{
		cout << "객체 소멸되었습니다. 메모리 사용하세요" << endl; //결과 역순으로 나옴
	}
};

 int main()
{
	Circle ob1, ob2(10); //디폴트 생성자로 초기화한다
	ob1.getArea(); // 디폴트 생성자로 초기화
	cout << "---------------------" << endl;
	ob2.getArea(); //인수 값으로 초기화

	return 0;
}