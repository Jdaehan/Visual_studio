////������ �ߺ� �ǽ�
//#include<iostream>
//using namespace std;
//
//class Power
//{
//	//�������
//	int kick; int punch;
//	//����Լ�
//public:
//	Power(int kick = 0, int punch = 0)
//	{
//		this->kick = kick; this->punch = punch;
//	}
//	void show() //����Լ�
//	{
//		cout << "kick=" << kick << ", punch=" << punch << endl;
//	}
//	void set()
//	{
//		cout << "������� �Է��ϼ���." << endl;
//		cin >> kick >> punch;
//	}
//
//	//������ �ߺ��Լ�
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