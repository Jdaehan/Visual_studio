#pragma once
#include "book.h"

class ConversationBook : public book
{
protected:
	string language;
	//멤버변수
public: 	//멤버함수
	ConversationBook(int id, string con, string user,int price,
		string ISBN, string bookwriter, string title)
		:book(id, con, user, price, ISBN, bookwriter, title) {
		this->language = language;
	}
	void pro_set() {
		cout << "*** 상품 ID : " << id << '\n';
		cout << "상품설명 : " << con << '\n';
		cout << "생산자 : " << user << '\n';
		cout << "가격 : " << price << '\n';
		cout << "ISBN : " << ISBN << '\n';
		cout << "책제목 : " << title << '\n';
		cout << "저자 : " << bookwriter << '\n';
		cout << "언어 : " << language << endl;
	}
};