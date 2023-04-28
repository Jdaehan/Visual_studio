#include<iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect
{
    //멤버 변수
    int width, height;
    //멤버 함수
public:
    Rect(int width, int height) //생성자
    {
        this->width = width;
        this->height = height;
    }
    void prn() //멤버 함수
    {
        cout << "가로 = " << width << ",세로 = " << height;
    }
    //외부에0 있는 프랜드 함수를 정의한다
    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) //객체를 인수로 한 함수
{
    if (r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

//객체의 width값과 height값을 입력받아 크기를 판단하도록 수정
int main()
{
    cout << "width값을 입력하세요>>";

    int width;
    cin >> width;

    cout << "height값을 입력하세요>>";

    int height;
    cin >> height;

    if (equals(width, height))
        cout << "두개의 객체의 크기가 같다" << endl;
    else
        cout << "두개의 객체의 크기가 다르다" << endl;

}

Rect a(3, 4);
Rect b(4, 5);

if (equals(a, b))