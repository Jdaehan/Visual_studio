#include <iostream>
#include "book.h"
#include "ConversationBook.h"
#include "CompactDisk.h"
#include <string>
using namespace std;

int main()
{
	//��ü ����
	//�޴�
	cout << "***** ��ǰ�������α׷� �۵��մϴ�. ***** " << endl;
	int mainmenu; int submenu;
	cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ?" << endl;
	cin >> mainmenu;

	switch (mainmenu)
	{
	case 1: //��ǰ�߰��� ���� ó��
		cout << "***** ��ǰ ���� ���� ***** " << endl;
		cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ?" << endl;
		cin >> submenu;
		break;
	case 2: //��� ��ǰ ��ȸ ���� �ۼ�
		break;
	case 3: //���α׷� ����
		cout << "***** ��ǰ ���� ���α׷��� �����մϴ� *****";
		return 0;
	}
}
