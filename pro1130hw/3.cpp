#include <iostream> // 20191450 장대한 실습문제 3번과제
using namespace std; 
template <class T> // 제네릭 타입 선언
void reverseArrays(T ar[], int n) { // 포인터는한계가 있어 배열형식으로 제출합니다.
    int j = n-1 //비어있음;
    for (int i = 0; i < j; i++) {  
        T tmp = ar[j];  // tmp 은 ar[j] 값
        ar[j] = ar[i]; // ar[j] 은 ar[i] 값
        ar[i] = tmp; // ar[i]은 tmp(=ar[j]) 값
        j--;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArrays(x, 5);
    for (int i = 0; i < 5; i++)  cout << x[i] << ' '; 
}
