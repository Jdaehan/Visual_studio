#pragma once
#include "Product.h"

class CompactDisk : public Product
{
protected:
	string abtitle;
	string singer;
	//멤버변수
public:
	CompactDisk(int id, string con, string user, int price
		, string abtitle, string singer) : Product(id, con, user, price) {
		this->abtitle = abtitle;
		this->singer = singer;
	}
	//멤버함수
	void pro_set() {
		cout << "*** 상품 ID :" << id << '\n';
		cout << "상품설명 : " << con << '\n';
		cout << "생산자 : " << user << '\n';
		cout << "가격 : " << price << '\n';
		cout << "앨범제목 : " << abtitle << '\n';
		cout << "가수 : " << singer << '\n';
	}
};