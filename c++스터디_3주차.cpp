#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
	int a, b, pw, loginpw;
	char name[10];
	char id[20];
	char loginid[30];

	while (1) {
		cout << " ********** swing ���� **********" << endl;
		cout << "1. ȸ������ " << endl;
		cout << "2. �α���" << endl;
		cout << "��ȣ�� �Է��ϼ��� >> ";
		cin >> a;

		if (a == 1) {

			cout << endl;
			cout << "�̸�: " ;
			cin >> name;
			cout << "���̵�: " ;
			cin >> id;
			cout << "��й�ȣ: " ;
			cin >> pw;

			cout << endl << "===== ȸ������ ���� =====" << endl;

		}

		else if (a == 2) {

			cout << "���̵�: ";
			cin >> loginid;

			cout << "��й�ȣ: ";
			cin >> loginpw;
			cout << endl;

			if (loginpw == pw or loginid==id) {
				cout << "===== �α��� ���� =====";
			}

			else if (loginpw != pw and loginid != id) {
				cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�.";
			}
			

		} 


					cout << endl;

					cout << name << "�� ȯ���մϴ�." << endl;
					cout << endl;

					while (1) {
						cout << " * *********swing �ڻ� ���� ���� **********" << endl;
						cout << "1. ���� ���� ��� " << endl;
						cout << "2. �� �ڻ� ���" << endl;
						cout << "3. �α׾ƿ� " << endl;

						cout << "��ȣ�� �Է��ϼ��� >>";
						cin >> b;

						if (b == 1) {

							void myaccount(); {

								cout << "-------------------------- swing ���� ���� --------------------------" << endl;
								cout << " " ;


							}
						}

						else if (b == 2) {

							
						}

						else if (b == 3) {

							cout << endl<< "===== �α׾ƿ� =====" << endl;
							cout << endl;
							cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;

							break;
						}
					} break;
				}
			}

	