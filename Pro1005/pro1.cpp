/*//���ڿ��� 5�� �Է¹޾� ������ ���� �ڿ� ������ ���ڿ� ����ϴ� ���α׷�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "���� �̸� �Է�:" << endl;
		getline(cin, name[i], '\n');
	}

	//������ �񱳺κ�
	string latter = name[0]; //ù��° �̸��� latter ��ü�� �Ҵ�
	string first = name[0];
	for (int i = 1; i < 5; i++)
	{
		if (latter < name[i])
			latter = name[i];
		else if (first > name[i])
			first = name[i];
	}

	//�Էµ� ���� ���, ������ ���� �ڿ� ������ ���ڿ� ���
	cout << "�Էµ� ������� �̸� ���:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << name[i] << endl;
	}
	cout << "���� �� ���� �տ� ������ ���ڿ� : " << first << endl;
	cout << "���� �� ���� �ڿ� ������ ���ڿ� : " << latter << endl;

	return 0;
}*/