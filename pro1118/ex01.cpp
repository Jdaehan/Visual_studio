#include <iostream>
#include "Cal.h"
using namespace std;

int main()
{
	//���߻��
	Calculator ob1;
	ob1.a = 10;
	ob1.b = 20;

	cout << "�������:" << ob1.cals('+', 10, 20) << endl;
	cout << "�������:" << ob1.cals('-', 10, 20) << endl;

	/*Child ob;
	ob.setA(10);
	ob.showA(); */

}