/*#include <iostream>
#include <string>
using namespace std;

class WordGame { //끝말잇기 게임 전체를 운영하는 클래스
    int playernumber;
    string before;
    string later;
    string name;
public:
    Player* p;
    WordGame() { before = "아버지"; }
    ~WordGame() { delete[]p; }
    void playgame();
};

class Player { //선수를 표현하는 클래스
    string name;
public:
    Player() {};
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

void WordGame::playgame() {
    int index = 0;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> playernumber;
    p = new Player[playernumber];
    for (int i = 0; i < playernumber; i++) {
        cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
        cin >> name;
        p[i].setName(name);
    }
    cout << "시작하는 단어는 " << before << "입니다." << endl;
    while (1) {
        if (index == playernumber) {
            index = 0;
        }
        cout << p[index].getName() << ">>";
        cin >> later;
        if (before.at(4) == later.at(0) && before.at(5) == later.at(1)) {
            // "아버지"의 '지'와 "지우개"의 '지'를 비교
            before = later;
            index++;
            continue;
        }
        else  //실패한 경우 처리 코드
        {
            cout << p[index].getName() << "이(가) 끝말잇기 게임에서 졌습니다.";
            break;
        }
    }
}

int main() //wordGame 객체를 생성하고 게임을 시작하는 함수 
{ 
    cout << "끝말 잇기 게임을 시작합니다" << endl;
    WordGame start;
    start.playgame();
}

*/

