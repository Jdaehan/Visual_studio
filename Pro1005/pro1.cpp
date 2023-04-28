/*//문자열을 5개 입력받아 사전상 가장 뒤에 나오는 문자열 출력하는 프로그램
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "가수 이름 입력:" << endl;
		getline(cin, name[i], '\n');
	}

	//사전상 비교부분
	string latter = name[0]; //첫번째 이름을 latter 객체에 할당
	string first = name[0];
	for (int i = 1; i < 5; i++)
	{
		if (latter < name[i])
			latter = name[i];
		else if (first > name[i])
			first = name[i];
	}

	//입력된 정보 출력, 사전상 가장 뒤에 나오는 문자열 출력
	cout << "입력된 순서대로 이름 출력:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << name[i] << endl;
	}
	cout << "사전 상 가장 앞에 나오는 문자열 : " << first << endl;
	cout << "사전 상 가장 뒤에 나오는 문자열 : " << latter << endl;

	return 0;
}*/