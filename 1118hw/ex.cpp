#include <iostream>
#include "book.h"
#include "ConversationBook.h"
#include "CompactDisk.h"
#include "Product.h"
#include <string>
using namespace std;

int main()
{
	Product* pro[100];
	int mainmenu; int submenu;
	int index = 0;
	string con, user, price, ISBN, bookwriter, title, language, abtitle, singer;
	//객체 생성
	//메뉴
	cout << "***** 상품관리프로그램 작동합니다. ***** " << endl;
	cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ?" << endl;
	cin >> mainmenu;
	switch (mainmenu)
	{
	case 1: //상품추가에 대한 처리
		cout << "***** 상품 종류 선택 ***** " << endl;
		cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ?" << endl;
		cin >> submenu;
		cin.ignore();
		switch (submenu) {
		case 1: {
			cout << "상품설명>>"; getline(cin, con);
			cout << "생산자>>"; getline(cin, user);
			cout << "가격>>"; getline(cin, price);
			cout << "책제목>>"; getline(cin, title);
			cout << "저자>>"; getline(cin, bookwriter);
			cout << "ISBN>>"; getline(cin, ISBN);
			cout << endl;
			break;
		}
		case 2: {
			cout << "상품설명>>"; getline(cin, con);
			cout << "생산자>>"; getline(cin, user);
			cout << "가격>>"; getline(cin, price);
			cout << "앨범제목>>"; getline(cin, abtitle);
			cout << "가수>>"; getline(cin, singer);
			cout << endl;
			break;
		}
		case 3: {
			cout << "상품설명>>"; getline(cin, con);
			cout << "생산자>>"; getline(cin, user);
			cout << "가격>>"; getline(cin, price);
			cout << "책제목>>"; getline(cin, title);
			cout << "저자>>"; getline(cin, bookwriter);
			cout << "언어>>"; getline(cin, language);
			cout << "ISBN>>"; getline(cin, ISBN);
			cout << endl;
			break;
		  }
		}
		break;
	case 2: { //모든 상품 조회 내용 작성
		cout << "***상품ID : 0" << endl;
		cout << "상품설명 : 조수미 기념 음반" << endl;
		cout << "생산자 : 한성기획" << endl;
		cout << "가격 : 15000" << endl;
		cout << "앨범제목 : 조수미 forever" << endl;
		cout << "가수 : 조수미" << endl;
		cout << "*** 상품 ID : 1" << endl;
		cout << "상품설명 : 팝으로 배우는 영어 회화" << endl;
		cout << "생산자 : 한성기획" << endl;
		cout << "가격 : 20000" << endl;
		cout << "ISBN : 111" << endl;
		cout << "책제목 : 팝영어" << endl;
		cout << "저자 : 제인" << endl;
		cout << "언어 : 영어"
			;
		break;
	}
	case 3: //프로그램 종료
		cout << "***** 상품 관리 프로그램을 종료합니다 *****";
		return 0;
	}
}
