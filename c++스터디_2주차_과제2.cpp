// ���� �ڵ� �޾Ƽ� �ٿ����� ���̴� ä�� �� ���ּŵ� �ſ�..! ���� �� �ϸ� ����� �����ϴ� �� ����� �� ���Ƽ� �̸� �÷Ƚ��ϴ� ��.. �ڵ带 �� �� ®� �̤�


#include <iostream>
using namespace std;

int main(void) {

	int seat[10][6] = { };
	int a, width, length, new_length, new_width; // width=����, length=����

	while (1) {
		cout << " ** ����� �¼� ���� �ý��� **" << endl << endl;
		cout << "1. �ű� ����" << endl;
		cout << "2. ���� ����" << endl;
		cout << "3. ���α׷� ����" << endl << endl;
		cout << "��ȣ�� �Է��ϼ���: ";
		cin >> a;

		if (a == 1) {
			cout << endl;
			cout << "1 2 3" << "\t" << "4 5 6" << endl;
			cout << "-------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					cout << seat[i][j] << " ";
					if (j == 2) {
						cout << "	";
					}
				}
				cout << endl;
			}

			cout << endl << "�, ���° �¼��� �����Ͻðڽ��ϱ�? ";
			cin >> length >> width;

			if (seat[length - 1][width - 1] == 0) {	//�迭�� �ε����� 0���� �����ϹǷ� ���� 1�� ���ش�.
				cout << "����Ǿ����ϴ�." << endl << endl;
				seat[length - 1][width - 1] = 1; // ����� �ڸ��� 1�� �ٲ��ش�.
			}

			else cout << "�̹� ����� �ڸ��Դϴ�." << endl; // �ش� �ڸ��� ���� 0�� �ƴ� 1�� ��� �̹� ����� �ڸ���

		}


		else if (a == 2) {
			cout << endl;
			cout << "1 2 3" << "\t" << "4 5 6" << endl;
			cout << "-------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					cout << seat[i][j] << " ";
					if (j == 2) {
						cout << "	";
					}
				}
				cout << endl;
			}
			cout << endl << "���� �¼��� �����ϰ��� �ϴ� �¼��� ���� ��, ��ȣ ������ �Է��� �ּ���: ";
			cin >> length >> width >> new_length >> new_width;
			if (seat[length - 1][width - 1] == 1) {
				if (seat[new_length - 1][new_width - 1] == 0) {
					seat[length - 1][width - 1] = 0;
					seat[new_length - 1][new_width - 1] = 1;
					cout << "�¼��� ����Ǿ����ϴ�." << endl;
				}
				else cout << "�̹� ����� �¼��Դϴ�. �ٸ� �¼��� ������ �ּ���." << endl;
			}
			else {
				cout << "�¼��� ��Ȯ�� �Է��� �ּ���." << endl;
			}
		}

		else if (a == 3) {
			cout << "���α׷��� �����մϴ�." << endl;			// �ݺ��� while�� ���ѹݺ��ǹǷ� �¼� �������� ���� �� �ݺ��� Ż��
			break;
		}

		else { cout << "�ùٸ� ���ڸ� �Է��� �ּ���." << endl; }

	}

	return 0;
}