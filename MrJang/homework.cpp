/*#include <iostream>
#include <string>
using namespace std;

class player {
    string name;
public:
    player() {};
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

class WordGame {
    int totalnum;
    string a, b, name;
public:
    player* p;
    WordGame()
    {a = "아버지";}  // string 객체 생성한 a에 연계
    ~WordGame() { delete[]p; } // 메모리 반환
    void playgame();
};

void WordGame::playgame() {
    int index = 0;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> totalnum;
    p = new player[totalnum];
    for (int i = 0; i < totalnum; i++) {
        cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
        cin >> name;
        p[i].setName(name);
    }
    cout << "시작하는 단어는 " << a << "입니다." << endl; //아버지로부터 시작하는 것을 알림.
    while (1) {
        if (index == totalnum) {
            index = 0;
        }
        cout << p[index].getName() << ">>";
        cin >> b;
        if (a.at(4) == b.at(0) && 
            a.at(5) == b.at(1)) { //"아버지"의 '지'와 "지우개"의 '지'를 비교
            a = b;
            cout << p[index].getName() << ", 통과! 다음 사람 말해보세요. \n"; //끝말잇기를 성공할 경우 처리 코드
            index++;
            continue;
        }
        else { // 실패한 경우
            cout << p[index].getName() << ", 땡..! 게임종료!! "; //끝말잇기를 실패할 경우 처리 코드
            break; //반복되면 게임이 끝나지 않으므로 break 처리.
        }
    }
}

int main() {
    cout << "끝말 잇기 게임을 시작합니다" << endl; //게임 시작 멘트
    WordGame begin; // WordGame 객체 생성
    begin.playgame();
}


*/