#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void myaccount(string* bank_name, int* bank) {
    cout << "-------------------------- swing ���� ���� --------------------------" << endl;
    cout << "|    " << bank_name[0] << "   |    " << bank_name[1] << "   |    " << bank_name[2] << "   |    " << bank_name[3] << "   |" << endl;
    cout << "|    " << bank[0] << "   |    " << bank[1] << "   |    " << bank[2] << "   |    " << bank[3] << "   |" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;
}

int total(int* bank) {
    int sum = 0;
    for (int q = 0; q < 4; q++) {

        sum += bank[q];
    }
    return sum;
}

int main(void) {

    int a, b, pw, loginpw;
    char name[10];
    char id[20];
    char loginid[30];

    int is_logged_in = false; // �α��� ���� Ȯ���ϴ� ����

    string bank_name[4] = { "����", "����", "����û��", "�ֽİ���" };
    int bank[4] = { 5000, 4000, 0, 10 };

    while (1) {

        cout << endl;
        cout << " ********** swing ���� **********" << endl;
        cout << "1. ȸ������ " << endl;
        cout << "2. �α���" << endl;
        cout << "��ȣ�� �Է��ϼ��� >> ";
        cin >> a;

        if (a == 1) {
            cout << endl;
            cout << "�̸�: ";
            cin >> name;
            cout << "���̵�: ";
            cin >> id;
            cout << "��й�ȣ: ";
            cin >> pw;

            cout << endl << "===== ȸ������ ���� =====" << endl;
            cout << endl;

            continue;
        }
        else if (a == 2) {
            cout << "���̵�: ";
            cin >> loginid;

            cout << "��й�ȣ: ";
            cin >> loginpw;
            cout << endl;

            if (loginpw == pw or loginid == id) {

                is_logged_in = true;
                cout << "===== �α��� ���� =====";
            }
            else if (loginpw != pw and loginid != id) {

                is_logged_in = false;
                cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�.";
                continue; // �α��� ���� �� �ٽ� �޴��� ���
            }
        }
        cout << endl;

        if (is_logged_in) {
            cout << name << "�� ȯ���մϴ�." << endl;
            cout << endl;
        }

        break;
    } 

            while (1) {
                cout << " **********swing �ڻ� ���� ���� **********" << endl;
                cout << "1. ���� ���� ��� " << endl;
                cout << "2. �� �ڻ� ���" << endl;
                cout << "3. �α׾ƿ� " << endl;

                cout << "��ȣ�� �Է��ϼ��� >>";
                cin >> b;

                if (b == 1) {
                    myaccount(bank_name, bank);

                    continue;
                }


                else if (b == 2) {

                    int sum = total(bank);
                    cout << endl;
                    cout << "���� swing �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << sum << "�� �Դϴ�." << endl;
                    cout << endl;

                    continue;

                }

                else if (b == 3) {

                    cout << endl << "===== �α׾ƿ� =====" << endl;
                    cout << endl;
                    cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;

                    break;
                }

                return 0;
            }
        }

