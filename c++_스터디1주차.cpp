#include <iostream>
using namespace std;

int main() {

	char name[10];

	cout << "�̸�: ";
	cin.getline(name, 10);

	cout << "�й�: 2023" << endl;

	cout << "�ݰ����ϴ�." << name << "��.\n" << endl;

	cout << "���� �Է��� �����մϴ�.\n" << endl;

	cout << "========== SWING 31 ==========\n";
	
	double a, b, c, d;

	cout << "C���α׷���(3����): ";
	cin >> a;

	cout << "��ǻ�͹�������ȣ����(3����): ";
	cin.ignore();
	cin >> b;

	cout << "����Ʈ����߽ǹ����(1����): ";
	cin.ignore();
	cin >> c;

	cout << "���а�޿���(2����): ";
	cin.ignore();
	cin >> d;


	cout << "==============================\n";

	cout << "�� ����(2023)���� ��ü ������ " << (((a*3)+(b*3)+(c*1)+(d*2))/9) << "�Դϴ�.\n" << endl;
	

	return 0;
}
