#pragma once
#include <iostream>
using namespace std;
template <class T>
class Mystack
{
	int tos;
	T data[100];
public:
	Mystack(); //생성자
	void push(T element); //멤버함수
	T pop(); //멤버함수
};

template <class T>
Mystack<T>::Mystack()
{
	tos = -1; //스택이 비어있다는 의미이다.
}

template <class T>
void Mystack<T>::push(T element) //스택에 자료를 넣는 메소드
{
	if (tos == 99) { cout << "stack full";  return;}
    tos++;
	data[tos] = element;
}
	
template <class T>
T Mystack<T>::pop() //스택에서 자료를 빼는 메소드
{
	T retData;
	if (tos == -1) { cout << "stack empty"; return 0; }
	retData = data[tos--];
	return retData;
}

//두개의 제네릭 타입을 가진 클래스 정의
template <class T1, class T2>
class GClass
{
	T1 data1;
	T2 data2;
public:
	GClass(); //생성자
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass() //객체 초기화
{
	data1 = 0; data2 = 0;
}

template <class T1, class T2>
void GClass<T1, T2> ::set(T1 a, T2 b)
{
	data1 = a; data2 = b;
}
template <class T1, class T2>
void GClass<T1, T2> ::get(T1& a, T2& b)
{
	a = data1; b = data2;
}