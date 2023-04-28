#pragma once
//현재 소스 파일이 단일 컴파일에 한 번만 포함
#include<string>
class Product
{
protected:
	//멤버변수
	int id;
	string con;
	string user;
	int price;

	//멤버함수
public:
	//생성자
	Product(int id, string con, string user, int price) //객체 초기화
	{
		this->id = id; this->con = con; this->user = user; this->price = price;
	}
	virtual void pro_set() = 0;
};
