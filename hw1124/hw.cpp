#include<iostream> // 정보통신전자공학과 20191450 장대한 470p [9장 실습문제 9번]
#include<string>
using namespace std;

class Printer {
protected: //멤버변수
	string model; //모델명
	string manufacturer; //제조사
	int printedCount; //인쇄 매수
	int availableCount; // 인쇄 종이 잔량
public: //멤버함수
	Printer(string mo, string ma, int aac) 
	{
		model = mo;
		manufacturer = ma;
		availableCount = aac;
	}
	virtual void print(int pages) = 0; // print(int pages) 함수
	virtual void show() = 0; // show() 함수 - 가상 함수
};
class InkJetPrinter : public Printer { // InkJetPrinter 동적 생성
	int availableInk; //잉크 잔량
public:
	InkJetPrinter(string mo, string ma, int aac, int aai) : Printer(mo, ma, aac) {availableInk = aai;}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 잉크] " << availableInk << endl;
	}
	virtual void print(int pages){
		if (availableCount >= pages && availableInk >= pages) {
			availableCount -= pages;
			availableInk -= pages;
			cout << "**** 프린트하였습니다. ****" << endl;
		}
		else
			cout << "!!!! 용지가 부족하여 프린트할 수 없습니다. !!!! " << endl;
	}
};

class LaserPrinter : public Printer { // LserPrinter 동적 생성
	int availableToner; //토너 잔량
public:
	LaserPrinter(string mo, string ma, int aac, int aat) : Printer(mo, ma, aac) { availableToner = aat; }
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 토너] " << availableToner <<endl;
	}
	virtual void print(int pages) {
		if (availableCount >= pages && availableToner >= pages) {
			availableCount -= pages;
			availableToner--;
			cout << "**** 프린트하였습니다. ****" << endl;
		}
		else
			cout << "!!!! 용지가 부족하여 프린트할 수 없습니다. !!!! " << endl;
	}
};

int main() {
	int Printernum, pages;
	string Pick; Printer* pt[2];
	pt[0] = new InkJetPrinter("[Officejet V40", "HP", 5, 10);
	pt[1] = new LaserPrinter("[SCX - 6x45", "삼성전자", 3, 20);

	cout << "---- 현재 작동중인 2 대의 프린터는 아래와 같다 ----" << endl;
	cout << "[잉크젯 : "; pt[0]->show();
	cout << "[레이저 : "; pt[1]->show();
	cout << endl;
	while (true) {
		cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력>>";
		cin >> Printernum >> pages;
		if (Printernum == 1) {
			pt[Printernum - 1]->print(pages);
			pt[0]->show();
			pt[1]->show();
		}
		else if (Printernum == 2) {
			pt[Printernum - 1]->print(pages);
			pt[0]->show();
			pt[1]->show();
		}
		else
			cout << "????? 잘못 입력하셨습니다. ?????" << endl;
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> Pick;
		cout << endl;
		if (Pick == "n")
		{
			cout << "***** 프린트 시스템을 종료합니다. *****";
			return 0; // n을 입력하면 종료 n이 아닌 y를 누르면 계속 진행 가능
		}

					
	}
}


