#pragma once
#include "Product.h"

class CompactDisk : public Product
{
protected:
	string abtitle;
	string singer;
	//�������
public:
	CompactDisk(int id, string con, string user, int price
		, string abtitle, string singer) : Product(id, con, user, price) {
		this->abtitle = abtitle;
		this->singer = singer;
	}
	//����Լ�
	void pro_set() {
		cout << "*** ��ǰ ID :" << id << '\n';
		cout << "��ǰ���� : " << con << '\n';
		cout << "������ : " << user << '\n';
		cout << "���� : " << price << '\n';
		cout << "�ٹ����� : " << abtitle << '\n';
		cout << "���� : " << singer << '\n';
	}
};