//this 포인터 이해 - 작성: 20191450 장대한
/*#include<iostream>
using namespace std;

class Car
{
	//멤버변수
	int enginCC; //엔진 1000cc, 1600cc, 2500cc...
	string color;//자동차 색깔
	string brand;//자동차 브랜드 - 삼성, 현대, 테슬라...
	string owner;//자동차 소유주
public:
	//멤버함수
	Car() { enginCC = 1000; color = "white"; brand = "삼성"; } //디폴트 생성자
	Car(int enginCC, string color, string brand, string owner)
	{
		this->enginCC = enginCC; this->color = color;
		this->brand = brand; this->owner = owner;
    }//인수가 4개인 생성자
	
	void input()
	{
		cout << "소유주 입력: ";  cin >> owner;
		cout << "엔진cc와 원하는 색상, 브랜드를 입력:" << endl;
		cin >> enginCC >> color >> brand;

	}

	void prn()
	{
		cout << owner <<"의 자동차 스펙 정보" << endl;
	    cout << "엔진" << enginCC << "자동차 색깔:" << color << ",브랜드" << brand << endl;
	}

};

//2명의 자동차정보를 입력하고 출력하는 프로그램 완성 , 결과 캡쳐
int main()
{
	Car goldCar, JangCar;
	goldCar.input();
	JangCar.input();

	cout << "-------------------------" << endl;
	goldCar.prn();
	JangCar.prn();

	return 0;
}*/