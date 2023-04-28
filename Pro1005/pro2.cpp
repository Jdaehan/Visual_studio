/*//문자열을 이용한 응용 프로그램 제작 - 덧셈 문자열을 받아 합계 출력

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "8+9+26+72 와 같이 덧셈 문제열을 입력해주세요. " << endl;
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
		int count = flndex - startlndex; //서브스트링으로 자를 문자열 개수
		string part = s.substr(startlndex, count);
		
		cout << part << endl;
		sum = sum + stoi(part);
		startlndex = flndex + 1;

	}
	cout << "숫자들의 합: " << sum;
	return 0;
}*/