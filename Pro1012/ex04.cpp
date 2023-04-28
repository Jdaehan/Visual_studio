//���� ��ü ����, ���� ��ü ����, ���� ������ - ����:20191450 �����
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<cstring>
using namespace std;
//Ŭ���� ����
class Person
{
//�������
	char* name;
	int id;
//����Լ�
public:
	//������
	Person(int id, const char* name);
	~Person();
	//���� ������
	Person(Person& p)
	{
		this->id = p.id;
		int len = strlen(p.name); //name�� ���� ����
		this->name = new char[len + 1]; //���ڿ� ���� �Ҵ�
		strcpy(this->name,p.name);
		cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
	}

	void changName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::~Person()
{
	if (name)
		delete[] name;
}
void Person::changName(const char* name)
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
int main()
{
	Person father(1, "daehan");
	Person daughter(father); //��ü ���� ����, ���� ������ ȣ��

	cout << "�� ��ü ���� ���� : " << endl;
	father.show();
	daughter.show();
	//��ü �̸� ����
	daughter.changName("grace");
	cout << "�� ��ü �̸� ���� �� : " << endl;
	father.show();
	daughter.show();

	return 0;
}