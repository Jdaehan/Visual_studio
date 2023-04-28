//클래스와 객체 개념 이해 프로그램 - 제작:20191450 장대한
#include<iostream>
using namespace std;

 //넓이 클래스 정의 - 클래스, 틀
class Area //원의 넓이, 사각형 넓이, 삼각형 넓이
{
	//멤버변수
private:
	int w, h, r; //가로,세로,반지름의 변수
	//멤버함수- 원,사각형,삼각형 넓이 계산함수, 입력, 출력
public:
	void circle_area();
	void re_area();
	void tr_area();

};
//멤버함수 구현부
void Area::circle_area()
{
	cout << "원의 넓이를 구하기 위한 반지름 입력: " << endl;
	cin >> r;
	double result = (double)r * (double)r * 3.14;
	cout << "반지름" << r << " 인 원의 넓이: " << result << endl;
}

void Area::re_area()
{
	cout << "사각형의 넓이를 구하기 위한 가로 세로입력: " << endl;
	cin >> w >> h;
	int result = w * h;
	cout << "가로:" << w << "세로:"<< h << " 인 사각형의 넓이: " << result << endl;
}

void Area::tr_area()
{
	cout << "삼각형의 넓이를 구하기 위한 밑변 높이입력: " << endl;
	cin >> w >> h;
	int result = w * h/2;
	cout << "밑변:" << w << "높이:" << h << " 인 삼각형의 넓이: " << result << endl;
}

//정의된 클래스의 객체 선언

/*int main()
{
	Area ob1; //객체 선언방법
	ob1.circle_area();
	ob1.re_area();
	ob1.tr_area();
	return 0;
}*/