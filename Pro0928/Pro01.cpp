/*//포인터 연습, 객체 포인터 실습, 객체배열 선언, 객체 초기화
#include<iostream>
using namespace std;
//클래스 정의
class Circle
{
	//멤버변수
	int radius;
	//메소드
public: //public 접근 해제시 private 자동 처리
	Circle() { radius = 1; }//생성자 - 객체를 초기화하는 특별한 메소드, 메소드 오버로딩(다형성)
	Circle(int r) { radius = r; } //생성자
	void setRadius(int r) { radius = r; }//멤버함수
	double getArea() { return 3.14 * radius * radius; } //멤버함수
};

int main()
{
	//2차원 객체 배열
	Circle ob[2][3];
	int n;
	//객체의 반지름 값을 설정
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
		cout << "값 입력: ";
		cin >> n;
		ob[row][col].setRadius(n);
	   }
	}

	//객체에 입력된 2차원 배열의 값 출력
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << "ob["<< row<< "][" << col << "] << 의  면적은 " << ob[row][col].getArea() << endl;
		}
	}

	////객체배열 선언, 객체배열 초기화
	//Circle ob[5] = { Circle(), Circle(10), Circle(100), Circle(2), Circle(3)};

	////객체배열 초기화된 결과 출력
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "ob[" << i << "]의 면적=" << ob[i].getArea() << endl;

	//}
	//cout << "-----------------------" << endl;
	////멤버함수로 반지름 설정
	//ob[0].setRadius(10); 
	//ob[1].setRadius(20);
	//ob[2].setRadius(30);
	//ob[3].setRadius(40);
	//ob[4].setRadius(50);
	////멤버함수에 의해 정의된 결과 출력
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "ob[" << i << "]의 면적=" << ob[i].getArea() << endl;

	//}





	////객체포인터
	//Circle ob1; //객체선언 - 디폴트 생성자로 객체 선언
	//Circle ob2(20); //객체선언 - 인수가 있는 생성자로 객체 선언

	//cout << "ob1의 면적 = " << ob1.getArea() << endl; // 3.14 * 1* 1 =
	//cout << "ob2의 면적 = " << ob2.getArea() << endl; // 3.14 * 20 * 20 =

	////객체 포인터 
	//Circle* p1;
	//Circle* p2;
	//p1 = &ob1;
	//p2 = &ob2;
	////포인터 변수로 객체 접근
	//cout << "p1=" << p1 << "p1의 객체의 getArea결과 = " << p1->getArea() << endl;
	//cout << "p1=" << p2 << "p2의 객체의 getArea결과 = " << p2->getArea() << endl;




	////int jumsu = 98;
	////double avg = 100;
	////int* p; //포인터 변수 선언
	////double* pd;
	////p = &jumsu; //포인터 변수에는 주소만 저장할 수 있다.
	////pd = &avg;

	////cout << "jumsu=" << jumsu << "," << "jumsu의 주소=" << &jumsu << endl;
	////cout << "*p=" << *p<< "," << "p=" << p << endl;
	////cout << "jumsu=" << avg << "," << "avg의 주소=" << &avg << endl;
	////cout << "*pd=" << *pd << "," << "pd=" << pd << endl;


	return 0;
}*/