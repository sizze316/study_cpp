#include <iostream>
using namespace std;

int main() {

	char name[10];
	char number[20]; 

	cout << "�̸�: ";
	cin.getline(name, 10); /*cin.getline�� ������ ������ ���ڿ��� �Է��� �� ����*/

	cout << "�й�: ";
	cin.getline(number, 20);

	cout << "�ݰ����ϴ�." << name << "��.\n" << endl; /*���� cin���� �Է��� name�� �޾ƿ�*/

	cout << "���� �Է��� �����մϴ�.\n" << endl;

	cout << "========== SWING 31 ==========\n";
	
	double a, b, c, d; /*������ �Ǽ� �̹Ƿ� double�� �޾ƾ���*/

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

	cout << name  << "("<< number <<")" << "���� ��ü ������ " << (((a * 3) + (b * 3) + (c * 1) + (d * 2)) / 9) << "�Դϴ�.\n" << endl;
	/*������ �Է��� name�� number�� �޾ƿ�*/


	return 0;
}
