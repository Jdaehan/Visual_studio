/*//��ü�� ���� ������ ��ȯ - p. 178 �ۼ�-20191450 �����
#include<iostream>
using namespace std;
//Ŭ����
class Circle
{
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	~Circle() { cout << "�Ҹ��� ����!" << endl; }
	void setRadius(int a) { radius = a; }
	double getArea() { return 3.14 * radius * radius; }
};
int main()
{
	Circle* pArray = new Circle[3]; //��ü�迭����
	int n;
	//��ü�迭�� �ʱ�ȭ
	for (int i = 0; i < 3; i++)
	{
		cout << "�ʱⰪ �Է�:"; cin >> n;
		pArray[i].setRadius(n);
	}
	//�ʱ�ȭ�� ������ ���� �̿��� ���� ���
	for (int i = 0; i < 3; i++)
	{
		cout << "pArray[" << i << "]�� ���� = " << pArray[i].getArea() << endl;
		cout << "pArray[" << i << "]�� �ּ� = " << &pArray[i] << endl;
	}

	delete[] pArray; //��ü�迭 ��ȯ

	//Circle* p = new Circle;
	//Circle* q = new Circle(30);
	//cout << p->getArea() << endl << q->getArea() << endl;
	//delete p;
	//delete q;

	return 0;
}*/