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
//	double getArea() {return radius * radius * 3.14;}
//};
//int main()
//{
//	Circle c; Circle& refc = c; //참조변수선언
//	refc.setR(45);
//	cout << "객체 c의 면적:" << c.getArea() << "refc의 면적:" << refc.getArea() << endl;
//
//	int n = 2;
//	int& refn = n;
//	cout << "처음 값 : n = " << n << ", refn= "<< refn <<  endl;
//	refn = 15;
//	cout << "값 변경후 결과 : n = " << n << ", refn = " << refn << endl;
//	return 0;
//}