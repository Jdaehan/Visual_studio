#include<iostream> // ����������ڰ��а� 20191450 ����� 470p [9�� �ǽ����� 9��]
#include<string>
using namespace std;

class Printer {
protected: //�������
	string model; //�𵨸�
	string manufacturer; //������
	int printedCount; //�μ� �ż�
	int availableCount; // �μ� ���� �ܷ�
public: //����Լ�
	Printer(string mo, string ma, int aac) 
	{
		model = mo;
		manufacturer = ma;
		availableCount = aac;
	}
	virtual void print(int pages) = 0; // print(int pages) �Լ�
	virtual void show() = 0; // show() �Լ� - ���� �Լ�
};
class InkJetPrinter : public Printer { // InkJetPrinter ���� ����
	int availableInk; //��ũ �ܷ�
public:
	InkJetPrinter(string mo, string ma, int aac, int aai) : Printer(mo, ma, aac) {availableInk = aai;}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,���� ��ũ] " << availableInk << endl;
	}
	virtual void print(int pages){
		if (availableCount >= pages && availableInk >= pages) {
			availableCount -= pages;
			availableInk -= pages;
			cout << "**** ����Ʈ�Ͽ����ϴ�. ****" << endl;
		}
		else
			cout << "!!!! ������ �����Ͽ� ����Ʈ�� �� �����ϴ�. !!!! " << endl;
	}
};

class LaserPrinter : public Printer { // LserPrinter ���� ����
	int availableToner; //��� �ܷ�
public:
	LaserPrinter(string mo, string ma, int aac, int aat) : Printer(mo, ma, aac) { availableToner = aat; }
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,���� ���] " << availableToner <<endl;
	}
	virtual void print(int pages) {
		if (availableCount >= pages && availableToner >= pages) {
			availableCount -= pages;
			availableToner--;
			cout << "**** ����Ʈ�Ͽ����ϴ�. ****" << endl;
		}
		else
			cout << "!!!! ������ �����Ͽ� ����Ʈ�� �� �����ϴ�. !!!! " << endl;
	}
};

int main() {
	int Printernum, pages;
	string Pick; Printer* pt[2];
	pt[0] = new InkJetPrinter("[Officejet V40", "HP", 5, 10);
	pt[1] = new LaserPrinter("[SCX - 6x45", "�Ｚ����", 3, 20);

	cout << "---- ���� �۵����� 2 ���� �����ʹ� �Ʒ��� ���� ----" << endl;
	cout << "[��ũ�� : "; pt[0]->show();
	cout << "[������ : "; pt[1]->show();
	cout << endl;
	while (true) {
		cout << "������(1: ��ũ��, 2: ������)�� �ż� �Է�>>";
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
			cout << "????? �߸� �Է��ϼ̽��ϴ�. ?????" << endl;
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> Pick;
		cout << endl;
		if (Pick == "n")
		{
			cout << "***** ����Ʈ �ý����� �����մϴ�. *****";
			return 0; // n�� �Է��ϸ� ���� n�� �ƴ� y�� ������ ��� ���� ����
		}

					
	}
}


