#include <iostream>
using namespace std;

int main(void) {

	int seat[10][6] = { };
	int width, length; /* width=����, length=����*/

	cout << " ** ����� �¼� ���� �ý��� **" << endl;
	cout << endl;

	int n;

	// ���������� �����
	cout << "1. �ű� ����" << endl;
	cout << "2. ���� ����" << endl;
	cout << "3. ���α׷� ����" << endl;
	cout << "��ȣ�� �Է��ϼ���: ";
	cin >> n;


	// 1�� ������ ���
	if (n == 1) {
		cout << endl;
		cout << "1 2 3" << "\t" << "4 5 6" << endl;
		cout << "--------------" << endl;

		//for�� �̿��Ͽ� ��ΰ� �ִ� ����� �¼� ����ϱ�
		int arr[6][10] = { 0, };

		for (length = 0; length < 10; length++) {
			cout << endl;
			for (width = 0; width < 6; width++) {
				cout << arr[length] << " "<< arr[width] << " ";
			}
			cout << endl;
		}

		cout << endl << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?";
		cin >> length >> width;

		// if, else�� �̿��Ͽ� �¼� �����ϱ�, �̹� ����� �ڸ��� �����ߴٸ� �ȳ��� ����ϱ�


	}

	// 2�� ������ ���



	// 3�� �Է��� ���
	if (n == 3) {
		cout << "���α׷��� �����մϴ�." << endl;
		exit(0);
	}


	// 1, 2, 3 �̿��� ���� �Է��� ���
	if (n != 1, 2, 3)
		cout << "�ùٸ� ���ڸ� �Է����ּ���." << endl;

}







