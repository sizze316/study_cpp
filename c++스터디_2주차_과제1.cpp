#include <iostream>
using namespace std;

int main() {

	srand(time(NULL));
	int random = rand() % 100;
	cout << "랜덤한 수: " << random << endl;

	int number;
	cout << "특정한 배수 개수: ";
	cin >> number;

	cout << endl;

	int a, b;
	for (a = 1; a <= number; a++) {
		cout << a << "번째 특정 배수 : ";
		cin >> b;
		cout << "<특정 배수만 출력하는 프로그램>" << endl;

		int n = 1;
		for (n; n <= random; n++)
		{
			if (n % b == 0)
				cout << n << ", ";
		}

		cout << endl;

		cout << "<특정 배수 제외 출력하는 프로그램>" << endl;

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