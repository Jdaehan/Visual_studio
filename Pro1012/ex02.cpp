////참조변수에 대한 실습 - 20191450 장대한
//#include <iostream>
//using namespace std;
////클래스-선언
//class Circle
//{
//	int radius;  //멤버 변수
//public:          //멤버 함수
//	Circle() { radius = 1; } //객체를 초기화 해주는 생성자
//	Circle(int radius) { this->radius = radius;}
//	void setR(int radius) { this->radius = radius; }
//	double getArea() {return (double)radius * (double)radius * 3.14;}
//};
////참조 함수
//void readRadius(Circle& c)
//{
//	int r;
//	cout << "정수 값으로 반지름을 입력: ";
//	cin >> r;
//	c.setR(r);
//}
//
//
//int main()
//{
//	Circle donut;
//	readRadius(donut); //&c = dount;
//	cout << "donut의 면적:" << donut.getArea() << endl;
//	return 0;
//}