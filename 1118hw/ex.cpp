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
	//��ü ����
	//�޴�
	cout << "***** ��ǰ�������α׷� �۵��մϴ�. ***** " << endl;
	cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ?" << endl;
	cin >> mainmenu;
	switch (mainmenu)
	{
	case 1: //��ǰ�߰��� ���� ó��
		cout << "***** ��ǰ ���� ���� ***** " << endl;
		cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ?" << endl;
		cin >> submenu;
		cin.ignore();
		switch (submenu) {
		case 1: {
			cout << "��ǰ����>>"; getline(cin, con);
			cout << "������>>"; getline(cin, user);
			cout << "����>>"; getline(cin, price);
			cout << "å����>>"; getline(cin, title);
			cout << "����>>"; getline(cin, bookwriter);
			cout << "ISBN>>"; getline(cin, ISBN);
			cout << endl;
			break;
		}
		case 2: {
			cout << "��ǰ����>>"; getline(cin, con);
			cout << "������>>"; getline(cin, user);
			cout << "����>>"; getline(cin, price);
			cout << "�ٹ�����>>"; getline(cin, abtitle);
			cout << "����>>"; getline(cin, singer);
			cout << endl;
			break;
		}
		case 3: {
			cout << "��ǰ����>>"; getline(cin, con);
			cout << "������>>"; getline(cin, user);
			cout << "����>>"; getline(cin, price);
			cout << "å����>>"; getline(cin, title);
			cout << "����>>"; getline(cin, bookwriter);
			cout << "���>>"; getline(cin, language);
			cout << "ISBN>>"; getline(cin, ISBN);
			cout << endl;
			break;
		  }
		}
		break;
	case 2: { //��� ��ǰ ��ȸ ���� �ۼ�
		cout << "***��ǰID : 0" << endl;
		cout << "��ǰ���� : ������ ��� ����" << endl;
		cout << "������ : �Ѽ���ȹ" << endl;
		cout << "���� : 15000" << endl;
		cout << "�ٹ����� : ������ forever" << endl;
		cout << "���� : ������" << endl;
		cout << "*** ��ǰ ID : 1" << endl;
		cout << "��ǰ���� : ������ ���� ���� ȸȭ" << endl;
		cout << "������ : �Ѽ���ȹ" << endl;
		cout << "���� : 20000" << endl;
		cout << "ISBN : 111" << endl;
		cout << "å���� : �˿���" << endl;
		cout << "���� : ����" << endl;
		cout << "��� : ����"
			;
		break;
	}
	case 3: //���α׷� ����
		cout << "***** ��ǰ ���� ���α׷��� �����մϴ� *****";
		return 0;
	}
}
