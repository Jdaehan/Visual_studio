// sort 함수를 이용하여 프로그램 처리
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v; //벡터 객체 선언
	
	cout << "5개의 정수 데이터 입력: " << endl;
	for (int i = 0; i < 5; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	cout << "정렬 전 데이터 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}

	sort(v.begin(), v.end()); //벡터 자료를 정렬함 - 오름차순
	cout << "\n정렬 후 데이터 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n역순으로 데이터 출력 " << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << v[i] << " ";
	}
	return 0;
}