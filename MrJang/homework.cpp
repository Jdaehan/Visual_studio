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
    {a = "�ƹ���";}  // string ��ü ������ a�� ����
    ~WordGame() { delete[]p; } // �޸� ��ȯ
    void playgame();
};

void WordGame::playgame() {
    int index = 0;
    cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
    cin >> totalnum;
    p = new player[totalnum];
    for (int i = 0; i < totalnum; i++) {
        cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
        cin >> name;
        p[i].setName(name);
    }
    cout << "�����ϴ� �ܾ�� " << a << "�Դϴ�." << endl; //�ƹ����κ��� �����ϴ� ���� �˸�.
    while (1) {
        if (index == totalnum) {
            index = 0;
        }
        cout << p[index].getName() << ">>";
        cin >> b;
        if (a.at(4) == b.at(0) && 
            a.at(5) == b.at(1)) { //"�ƹ���"�� '��'�� "���찳"�� '��'�� ��
            a = b;
            cout << p[index].getName() << ", ���! ���� ��� ���غ�����. \n"; //�����ձ⸦ ������ ��� ó�� �ڵ�
            index++;
            continue;
        }
        else { // ������ ���
            cout << p[index].getName() << ", ��..! ��������!! "; //�����ձ⸦ ������ ��� ó�� �ڵ�
            break; //�ݺ��Ǹ� ������ ������ �����Ƿ� break ó��.
        }
    }
}

int main() {
    cout << "���� �ձ� ������ �����մϴ�" << endl; //���� ���� ��Ʈ
    WordGame begin; // WordGame ��ü ����
    begin.playgame();
}


*/