// sort �Լ��� �̿��Ͽ� ���α׷� ó��
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v; //���� ��ü ����
	
	cout << "5���� ���� ������ �Է�: " << endl;
	for (int i = 0; i < 5; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	cout << "���� �� ������ " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}

	sort(v.begin(), v.end()); //���� �ڷḦ ������ - ��������
	cout << "\n���� �� ������ " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n�������� ������ ��� " << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << v[i] << " ";
	}
	return 0;
}