//얕은 객체 복사, 깊은 객체 복사, 복사 생성자 - 제작:20191450 장대한
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<cstring>
using namespace std;
//클래스 정의
class Person
{
//멤버변수
	char* name;
	int id;
//멤버함수
public:
	//생성자
	Person(int id, const char* name);
	~Person();
	//복사 생성자
	Person(Person& p)
	{
		this->id = p.id;
		int len = strlen(p.name); //name의 문자 개수
		this->name = new char[len + 1]; //문자열 공간 할당
		strcpy(this->name,p.name);
		cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
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
	Person daughter(father); //객체 복사 생성, 복사 생성자 호출

	cout << "딸 객체 생성 직후 : " << endl;
	father.show();
	daughter.show();
	//객체 이름 변경
	daughter.changName("grace");
	cout << "딸 객체 이름 변경 후 : " << endl;
	father.show();
	daughter.show();

	return 0;
}