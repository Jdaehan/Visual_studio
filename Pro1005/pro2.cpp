/*//���ڿ��� �̿��� ���� ���α׷� ���� - ���� ���ڿ��� �޾� �հ� ���

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "8+9+26+72 �� ���� ���� �������� �Է����ּ���. " << endl;
	getline(cin, s, '\n');

	int sum = 0;
	int startlndex = 0;

	while (true)
	{
		int flndex = s.find('+', startlndex);
		if (flndex == -1)
		{
			string part = s.substr(startlndex);
			if (part == "") break;
			cout << part << endl;
			sum = sum + stoi(part);
			break;
		}
		int count = flndex - startlndex; //���꽺Ʈ������ �ڸ� ���ڿ� ����
		string part = s.substr(startlndex, count);
		
		cout << part << endl;
		sum = sum + stoi(part);
		startlndex = flndex + 1;

	}
	cout << "���ڵ��� ��: " << sum;
	return 0;
}*/