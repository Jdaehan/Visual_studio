//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//	string title;
//	int price, pages;
//public:
//	Book(string title = "", int price = 0, int pages = 0) {
//		this->title = title; this->price = price; this->pages = pages;
//	}
//	void show() {
//		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
//	}
//	string getTitle() { return title; }
//
//	friend bool operator== (Book& b, int a);
//	friend bool operator== (Book& b, string a);
//	friend bool operator== (Book& b, Book& a);
//};
//bool operator==(Book& b, int a) {
//	if (b.price == a)
//		return true;
//	return false;
//}
//bool operator==(Book& b, string a) {
//	if (b.title == a)
//		return true;
//	return false;
//}
//bool operator==(Book& b, Book& a) {
//	if (b.price == a.price && b.title == a.title)
//		return true;
//	return false;
//}
//
//	int main() {
//		Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//		if (a == 30000) cout << "���� 30000��" << endl; // price �� 
//		if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title �� 
//		if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;  // title, price, pages ��� �� 
//	}