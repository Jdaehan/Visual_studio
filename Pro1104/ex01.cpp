//#include <iostream>
//using namespace std;
//
//class Rect;
//bool equals(Rect r, Rect s);
//
//class Rect 
//{ // Rect 클래스 선언
//	//멤버 변수
//	int width, height;
//	//멤버 함수
//public:
//	Rect(int width, int height) 
//	{ 
//		this->width = width; this->height = height; 
//	}
//	//프렌드 함수 선언
//	friend bool equals(Rect r, Rect s);
//};
//
////외부 함수 상세히 정의
//bool equals(Rect r, Rect s) 
//{ //외부 함수
//	if (r.width == s.width && r.height == s.height) return true;
//	else return false;
//}
//
//int main() {
//	Rect a(3, 4), b(4, 5);
//	if (equals(a, b)) cout << "같다" << endl;
//	else cout << "다르다" << endl;
//}