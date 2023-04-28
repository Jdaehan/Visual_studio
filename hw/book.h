#pragma once
#include "Product.h"
#include <string>
using namespace std;
class book : public Product
{
protected:
	//멤버변수
	string ISBN;
	string bookwriter;
	string title;
	//멤버함수
public:
	book(int id, string con, string user, int price
		, string ISBN, string bookwriter, string title)
		:Product(id, con, user, price) {
		this->ISBN = ISBN;
		this->bookwriter = bookwriter;
		this->title = title;
	}
	void show() {
		cout << "*** 상품 ID : " << id << '\n';
		cout << "상품 설명 : " << con << '\n';
		cout << "생산자 : " << user << '\n';
		cout << "가격 : " << price << '\n';
		cout << "ISBN : " << ISBN << '\n';
		cout << "책제목 : " << title << '\n';
		cout << "저자 : " << bookwriter << endl;
	}
};