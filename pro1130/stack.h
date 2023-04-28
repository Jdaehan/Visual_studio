#pragma once
#include <iostream>
using namespace std;
template <class T>
class Mystack
{
	int tos;
	T data[100];
public:
	Mystack(); //������
	void push(T element); //����Լ�
	T pop(); //����Լ�
};

template <class T>
Mystack<T>::Mystack()
{
	tos = -1; //������ ����ִٴ� �ǹ��̴�.
}

template <class T>
void Mystack<T>::push(T element) //���ÿ� �ڷḦ �ִ� �޼ҵ�
{
	if (tos == 99) { cout << "stack full";  return;}
    tos++;
	data[tos] = element;
}
	
template <class T>
T Mystack<T>::pop() //���ÿ��� �ڷḦ ���� �޼ҵ�
{
	T retData;
	if (tos == -1) { cout << "stack empty"; return 0; }
	retData = data[tos--];
	return retData;
}

//�ΰ��� ���׸� Ÿ���� ���� Ŭ���� ����
template <class T1, class T2>
class GClass
{
	T1 data1;
	T2 data2;
public:
	GClass(); //������
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass() //��ü �ʱ�ȭ
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