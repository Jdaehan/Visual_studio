#include <iostream>
#include "book.h"
#include "ConversationBook.h"
#include "CompactDisk.h"
#include <string>
using namespace std;

int main()
{
	//객체 생성
	//메뉴
	cout << "***** 상품관리프로그램 작동합니다. ***** " << endl;
	int mainmenu; int submenu;
	cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ?" << endl;
	cin >> mainmenu;

	switch (mainmenu)
	{
	case 1: //상품추가에 대한 처리
		cout << "***** 상품 종류 선택 ***** " << endl;
		cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ?" << endl;
		cin >> submenu;
		break;
	case 2: //모든 상품 조회 내용 작성
		break;
	case 3: //프로그램 종료
		cout << "***** 상품 관리 프로그램을 종료합니다 *****";
		return 0;
	}
}
