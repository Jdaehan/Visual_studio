//Ŭ������ ��ü ���� ���� ���α׷� - ����:20191450 �����
#include<iostream>
using namespace std;

 //���� Ŭ���� ���� - Ŭ����, Ʋ
class Area //���� ����, �簢�� ����, �ﰢ�� ����
{
	//�������
private:
	int w, h, r; //����,����,�������� ����
	//����Լ�- ��,�簢��,�ﰢ�� ���� ����Լ�, �Է�, ���
public:
	void circle_area();
	void re_area();
	void tr_area();

};
//����Լ� ������
void Area::circle_area()
{
	cout << "���� ���̸� ���ϱ� ���� ������ �Է�: " << endl;
	cin >> r;
	double result = (double)r * (double)r * 3.14;
	cout << "������" << r << " �� ���� ����: " << result << endl;
}

void Area::re_area()
{
	cout << "�簢���� ���̸� ���ϱ� ���� ���� �����Է�: " << endl;
	cin >> w >> h;
	int result = w * h;
	cout << "����:" << w << "����:"<< h << " �� �簢���� ����: " << result << endl;
}

void Area::tr_area()
{
	cout << "�ﰢ���� ���̸� ���ϱ� ���� �غ� �����Է�: " << endl;
	cin >> w >> h;
	int result = w * h/2;
	cout << "�غ�:" << w << "����:" << h << " �� �ﰢ���� ����: " << result << endl;
}

//���ǵ� Ŭ������ ��ü ����

/*int main()
{
	Area ob1; //��ü ������
	ob1.circle_area();
	ob1.re_area();
	ob1.tr_area();
	return 0;
}*/