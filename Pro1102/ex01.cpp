#include<iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect
{
    //��� ����
    int width, height;
    //��� �Լ�
public:
    Rect(int width, int height) //������
    {
        this->width = width;
        this->height = height;
    }
    void prn() //��� �Լ�
    {
        cout << "���� = " << width << ",���� = " << height;
    }
    //�ܺο�0 �ִ� ������ �Լ��� �����Ѵ�
    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) //��ü�� �μ��� �� �Լ�
{
    if (r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

//��ü�� width���� height���� �Է¹޾� ũ�⸦ �Ǵ��ϵ��� ����
int main()
{
    cout << "width���� �Է��ϼ���>>";

    int width;
    cin >> width;

    cout << "height���� �Է��ϼ���>>";

    int height;
    cin >> height;

    if (equals(width, height))
        cout << "�ΰ��� ��ü�� ũ�Ⱑ ����" << endl;
    else
        cout << "�ΰ��� ��ü�� ũ�Ⱑ �ٸ���" << endl;

}

Rect a(3, 4);
Rect b(4, 5);

if (equals(a, b))