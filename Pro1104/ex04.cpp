////연산자 중복 실습
//#include<iostream>
//using namespace std;
//
//class Power
//{
//	//멤버변수
//	int kick; int punch;
//	//멤버함수
//public:
//	Power(int kick = 0, int punch = 0)
//	{
//		this->kick = kick; this->punch = punch;
//	}
//	void show() //멤버함수
//	{
//		cout << "kick=" << kick << ", punch=" << punch << endl;
//	}
//	void set()
//	{
//		cout << "멤버값을 입력하세요." << endl;
//		cin >> kick >> punch;
//	}
//
//	//연산자 중복함수
//	Power operator+(Power ob);
//	Power& operator++();
//};
//	Power Power::operator+(Power ob)
//	{
//		Power tmp;
//		tmp.kick = this-> kick + ob.kick; 
//		tmp.punch = this->kick + ob.punch;
//		return tmp;
//	}
//	Power& Power::operator++()
//	{
//		kick++; punch++;
//		return *this;
//	}
//
//	int main()
//	{
//		Power a, b, c, d;
//		a.set();
//		b.set();
//		c = a + b;
//		a.show();
//		b.show();
//		c.show();
//		d = ++a;
//		a.show();
//		d = ++b;
//		a.show();
//		b.show();
//
//		return 0;
//	}