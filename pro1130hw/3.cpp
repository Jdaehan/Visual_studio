#include <iostream> // 20191450 ����� �ǽ����� 3������
using namespace std; 
template <class T> // ���׸� Ÿ�� ����
void reverseArrays(T ar[], int n) { // �����ʹ��Ѱ谡 �־� �迭�������� �����մϴ�.
    int j = n-1 //�������;
    for (int i = 0; i < j; i++) {  
        T tmp = ar[j];  // tmp �� ar[j] ��
        ar[j] = ar[i]; // ar[j] �� ar[i] ��
        ar[i] = tmp; // ar[i]�� tmp(=ar[j]) ��
        j--;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArrays(x, 5);
    for (int i = 0; i < 5; i++)  cout << x[i] << ' '; 
}
