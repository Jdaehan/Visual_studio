#pragma once
#include "book.h"

class ConversationBook : public book
{
protected:
	string language;
	//�������
public: 	//����Լ�
	ConversationBook(int id, string con, string user,int price,
		string ISBN, string bookwriter, string title)
		:book(id, con, user, price, ISBN, bookwriter, title) {
		this->language = language;
	}
	void pro_set() {
		cout << "*** ��ǰ ID : " << id << '\n';
		cout << "��ǰ���� : " << con << '\n';
		cout << "������ : " << user << '\n';
		cout << "���� : " << price << '\n';
		cout << "ISBN : " << ISBN << '\n';
		cout << "å���� : " << title << '\n';
		cout << "���� : " << bookwriter << '\n';
		cout << "��� : " << language << endl;
	}
};