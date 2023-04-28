#include <iostream>
using namespace std;
class BaseClass {
public:
	char* getMessage() {
	return "Good morning, World!";
	}
};

class SubClass : public BaseClass {
public:
	 char* getMessage() {
    return "Good evening, World!";
	}
};

int main() {
	BaseClass b, *p;
	SubClass s;
	p = &s;
	cout << p->getMessage() << endl;
	return 0;
}



