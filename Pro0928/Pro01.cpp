/*//������ ����, ��ü ������ �ǽ�, ��ü�迭 ����, ��ü �ʱ�ȭ
#include<iostream>
using namespace std;
//Ŭ���� ����
class Circle
{
	//�������
	int radius;
	//�޼ҵ�
public: //public ���� ������ private �ڵ� ó��
	Circle() { radius = 1; }//������ - ��ü�� �ʱ�ȭ�ϴ� Ư���� �޼ҵ�, �޼ҵ� �����ε�(������)
	Circle(int r) { radius = r; } //������
	void setRadius(int r) { radius = r; }//����Լ�
	double getArea() { return 3.14 * radius * radius; } //����Լ�
};

int main()
{
	//2���� ��ü �迭
	Circle ob[2][3];
	int n;
	//��ü�� ������ ���� ����
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
		cout << "�� �Է�: ";
		cin >> n;
		ob[row][col].setRadius(n);
	   }
	}

	//��ü�� �Էµ� 2���� �迭�� �� ���
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << "ob["<< row<< "][" << col << "] << ��  ������ " << ob[row][col].getArea() << endl;
		}
	}

	////��ü�迭 ����, ��ü�迭 �ʱ�ȭ
	//Circle ob[5] = { Circle(), Circle(10), Circle(100), Circle(2), Circle(3)};

	////��ü�迭 �ʱ�ȭ�� ��� ���
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "ob[" << i << "]�� ����=" << ob[i].getArea() << endl;

	//}
	//cout << "-----------------------" << endl;
	////����Լ��� ������ ����
	//ob[0].setRadius(10); 
	//ob[1].setRadius(20);
	//ob[2].setRadius(30);
	//ob[3].setRadius(40);
	//ob[4].setRadius(50);
	////����Լ��� ���� ���ǵ� ��� ���
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "ob[" << i << "]�� ����=" << ob[i].getArea() << endl;

	//}





	////��ü������
	//Circle ob1; //��ü���� - ����Ʈ �����ڷ� ��ü ����
	//Circle ob2(20); //��ü���� - �μ��� �ִ� �����ڷ� ��ü ����

	//cout << "ob1�� ���� = " << ob1.getArea() << endl; // 3.14 * 1* 1 =
	//cout << "ob2�� ���� = " << ob2.getArea() << endl; // 3.14 * 20 * 20 =

	////��ü ������ 
	//Circle* p1;
	//Circle* p2;
	//p1 = &ob1;
	//p2 = &ob2;
	////������ ������ ��ü ����
	//cout << "p1=" << p1 << "p1�� ��ü�� getArea��� = " << p1->getArea() << endl;
	//cout << "p1=" << p2 << "p2�� ��ü�� getArea��� = " << p2->getArea() << endl;




	////int jumsu = 98;
	////double avg = 100;
	////int* p; //������ ���� ����
	////double* pd;
	////p = &jumsu; //������ �������� �ּҸ� ������ �� �ִ�.
	////pd = &avg;

	////cout << "jumsu=" << jumsu << "," << "jumsu�� �ּ�=" << &jumsu << endl;
	////cout << "*p=" << *p<< "," << "p=" << p << endl;
	////cout << "jumsu=" << avg << "," << "avg�� �ּ�=" << &avg << endl;
	////cout << "*pd=" << *pd << "," << "pd=" << pd << endl;


	return 0;
}*/