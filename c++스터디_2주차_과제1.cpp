#include <iostream>
using namespace std;

int main() {

	srand(time(NULL));
	int random = rand() % 100;
	cout << "������ ��: " << random << endl;

	int number;
	cout << "Ư���� ��� ����: ";
	cin >> number;

	cout << endl;

	int a, b;
	for (a = 1; a <= number; a++) {
		cout << a << "��° Ư�� ��� : ";
		cin >> b;
		cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;

		int n = 1;
		for (n; n <= random; n++)
		{
			if (n % b == 0)
				cout << n << ", ";
		}

		cout << endl;

		cout << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;

		int m = 1;
		for (m; m <= random; m++)
		{
			if (m % b == 0)
				continue;
			else
				cout << m << ", ";
		}

		cout << endl;

	}

	return 0;

}