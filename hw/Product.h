#pragma once
//���� �ҽ� ������ ���� �����Ͽ� �� ���� ����
#include<string>
class Product
{
protected:
	//�������
	int id;
	string con;
	string user;
	int price;

	//����Լ�
public:
	//������
	Product(int id, string con, string user, int price) //��ü �ʱ�ȭ
	{
		this->id = id; this->con = con; this->user = user; this->price = price;
	}
	virtual void pro_set() = 0;
};
