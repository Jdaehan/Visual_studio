//������, �Ҹ��� - 20191450 �����
#include<iostream>
using namespace std;

class Circle
{
	//�������
	int r;
	//����Լ�
public:
	void getArea()
	{
		cout << "������:" << r << "��" << endl;
		double res = (double)r * (double)r * 3.14;
		cout << "���� ����: " << res << endl;
	}
	//������ - Ŭ���� �̸��� �Ȱ��ƾ��ϰ� ����Ÿ���� ����
	Circle() //����Ʈ ������
	{
		r = 1; //������ ���� �ʱⰪ 1�� ����
	}
	Circle(int radius) //�μ��� �ִ� ������
	{
		r = radius;
	}
	//�Ҹ���
	~Circle()
	{
		cout << "��ü �Ҹ�Ǿ����ϴ�. �޸� ����ϼ���" << endl; //��� �������� ����
	}
};

 int main()
{
	Circle ob1, ob2(10); //����Ʈ �����ڷ� �ʱ�ȭ�Ѵ�
	ob1.getArea(); // ����Ʈ �����ڷ� �ʱ�ȭ
	cout << "---------------------" << endl;
	ob2.getArea(); //�μ� ������ �ʱ�ȭ

	return 0;
}