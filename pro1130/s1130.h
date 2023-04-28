#pragma once
#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b)
{
	if (a > b) return a;
	else return b;
}

template<class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n)
{
	for (int i = 0; i < n; i++)
		dest[i] = (T2)src[i]; //(T2)는 형반환
}