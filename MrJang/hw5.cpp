/*#include <iostream>
#include <string>
using namespace std;

class WordGame { //�����ձ� ���� ��ü�� ��ϴ� Ŭ����
    int playernumber;
    string before;
    string later;
    string name;
public:
    Player* p;
    WordGame() { before = "�ƹ���"; }
    ~WordGame() { delete[]p; }
    void playgame();
};

class Player { //������ ǥ���ϴ� Ŭ����
    string name;
public:
    Player() {};
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

void WordGame::playgame() {
    int index = 0;
    cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
    cin >> playernumber;
    p = new Player[playernumber];
    for (int i = 0; i < playernumber; i++) {
        cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
        cin >> name;
        p[i].setName(name);
    }
    cout << "�����ϴ� �ܾ�� " << before << "�Դϴ�." << endl;
    while (1) {
        if (index == playernumber) {
            index = 0;
        }
        cout << p[index].getName() << ">>";
        cin >> later;
        if (before.at(4) == later.at(0) && before.at(5) == later.at(1)) {
            // "�ƹ���"�� '��'�� "���찳"�� '��'�� ��
            before = later;
            index++;
            continue;
        }
        else  //������ ��� ó�� �ڵ�
        {
            cout << p[index].getName() << "��(��) �����ձ� ���ӿ��� �����ϴ�.";
            break;
        }
    }
}

int main() //wordGame ��ü�� �����ϰ� ������ �����ϴ� �Լ� 
{ 
    cout << "���� �ձ� ������ �����մϴ�" << endl;
    WordGame start;
    start.playgame();
}

*/

