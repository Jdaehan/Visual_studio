#pragma once
#include "Product.h"
#include <string>
using namespace std;
class book : public Product
{
protected:
	//�������
	string ISBN;
	string bookwriter;
	string title;
	//����Լ�
public:
	book(int id, string con, string user, int price
		, string ISBN, string bookwriter, string title)
		:Product(id, con, user, price) {
		this->ISBN = ISBN;
		this->bookwriter = bookwriter;
		this->title = title;
	}
	void show() {
		cout << "*** ��ǰ ID : " << id << '\n';
		cout << "��ǰ ���� : " << con << '\n';
		cout << "������ : " << user << '\n';
		cout << "���� : " << price << '\n';
		cout << "ISBN : " << ISBN << '\n';
		cout << "å���� : " << title << '\n';
		cout << "���� : " << bookwriter << endl;
	}
};