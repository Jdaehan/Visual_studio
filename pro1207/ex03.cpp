//STL map �ǽ� - �й��̸�: 20191450 ���ѻ��� ����
#include<iostream>
#include<map>
#include<string>
using namespace std;
/*
int main()
{
	map<string, string> dic; //map ��ü ����  -���� ���� ��ü
	map<string, string> korengdic; //map ��ü ���� -�ѿ� ���� ��ü
	string eng;
	string kor;
	//���ѻ����� �ڷ� ���
	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic.insert(make_pair("class", "�б�"));
	dic.insert(make_pair("pass", "�հ�"));
	dic.insert(make_pair("phone", "��ȭ��"));
	dic.insert(make_pair("cup", "��"));
	//�ѿ������� �ڷ� ���
	korengdic.insert(make_pair("���", "love"));
	korengdic.insert(make_pair("���", "apple"));
	korengdic.insert(make_pair("�б�", "class"));
	korengdic.insert(make_pair("�հ�", "pass"));
	korengdic.insert(make_pair("��ȭ��", "phone"));
	korengdic.insert(make_pair("��", "cup"));
	
	while (true)
	{
		char menu;
		//switch-case ������ �����ϵ��� ���α׷� ����
		cout << "v.1.0 ����:20191450 �����" << endl;
		cout << "����� ���� ����: " << endl;
		cout << "1:���ѻ��� 2:�ѿ����� q(Q): ���α׷� ����" << endl;
		cin >> menu;
		switch (menu)
		{
		case '1':
			cout << "����� �ܾ� ���� " << dic.size() << endl;
			//���� �ܾ �ѱ۷� ã�Ƽ� �����ֱ�
			while (true)
			{
				cout << "ã�� �ܾ� �Է�(�����:exit) >> ";
				cin >> eng;
				if (eng == "exit")
					break; //while���� ������ ����
				if (dic.find(eng) == dic.end())
					cout << "ã�� �ܾ ����" << endl;
				else
					cout << dic[eng] << endl;
			}

		case '2':
			cout << "����� �ܾ� ���� " << korengdic.size() << endl;
			// ���� �ܾ �ѱ۷� ã�Ƽ� �����ֱ�
			while (true)
			{
				cout << "ã�� �ܾ� �Է� >> (�����:����)";
				cin >> kor;
				if (kor == "����")
					break; // while���� ������ ����
				if (korengdic.find(kor) == korengdic.end())
					cout << "ã�� �ܾ ����" << endl;
				else
					cout << korengdic[kor] << endl;
			}
			break;
		case 'q':
		case 'Q': cout << "���α׷� ����" << endl;  return 0;
		}
	}
	return 0;
} */