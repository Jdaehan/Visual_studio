//STL map 실습 - 학번이름: 20191450 영한사전 제작
#include<iostream>
#include<map>
#include<string>
using namespace std;
/*
int main()
{
	map<string, string> dic; //map 객체 선언  -영한 사전 객체
	map<string, string> korengdic; //map 객체 선언 -한영 사전 객체
	string eng;
	string kor;
	//영한사전에 자료 등록
	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic.insert(make_pair("class", "학급"));
	dic.insert(make_pair("pass", "합격"));
	dic.insert(make_pair("phone", "전화기"));
	dic.insert(make_pair("cup", "컵"));
	//한영사전에 자료 등록
	korengdic.insert(make_pair("사랑", "love"));
	korengdic.insert(make_pair("사과", "apple"));
	korengdic.insert(make_pair("학급", "class"));
	korengdic.insert(make_pair("합격", "pass"));
	korengdic.insert(make_pair("전화기", "phone"));
	korengdic.insert(make_pair("컵", "cup"));
	
	while (true)
	{
		char menu;
		//switch-case 문으로 선택하도록 프로그램 제작
		cout << "v.1.0 제작:20191450 장대한" << endl;
		cout << "사용할 사전 선택: " << endl;
		cout << "1:영한사전 2:한영사전 q(Q): 프로그램 종료" << endl;
		cin >> menu;
		switch (menu)
		{
		case '1':
			cout << "저장된 단어 개수 " << dic.size() << endl;
			//영어 단어를 한글로 찾아서 보여주기
			while (true)
			{
				cout << "찾을 단어 입력(종료시:exit) >> ";
				cin >> eng;
				if (eng == "exit")
					break; //while문을 나가서 종료
				if (dic.find(eng) == dic.end())
					cout << "찾는 단어가 없음" << endl;
				else
					cout << dic[eng] << endl;
			}

		case '2':
			cout << "저장된 단어 개수 " << korengdic.size() << endl;
			// 영어 단어를 한글로 찾아서 보여주기
			while (true)
			{
				cout << "찾을 단어 입력 >> (종료시:종료)";
				cin >> kor;
				if (kor == "종료")
					break; // while문을 나가서 종료
				if (korengdic.find(kor) == korengdic.end())
					cout << "찾는 단어가 없음" << endl;
				else
					cout << korengdic[kor] << endl;
			}
			break;
		case 'q':
		case 'Q': cout << "프로그램 종료" << endl;  return 0;
		}
	}
	return 0;
} */