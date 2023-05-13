#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void myaccount(string* bank_name, int* bank) {
    cout << "-------------------------- swing 계좌 정보 --------------------------" << endl;
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

    int is_logged_in = false; // 로그인 여부 확인하는 변수

    string bank_name[4] = { "예금", "적금", "주택청약", "주식계좌" };
    int bank[4] = { 5000, 4000, 0, 10 };

    while (1) {

        cout << endl;
        cout << " ********** swing 은행 **********" << endl;
        cout << "1. 회원가입 " << endl;
        cout << "2. 로그인" << endl;
        cout << "번호를 입력하세요 >> ";
        cin >> a;

        if (a == 1) {
            cout << endl;
            cout << "이름: ";
            cin >> name;
            cout << "아이디: ";
            cin >> id;
            cout << "비밀번호: ";
            cin >> pw;

            cout << endl << "===== 회원가입 성공 =====" << endl;
            cout << endl;

            continue;
        }
        else if (a == 2) {
            cout << "아이디: ";
            cin >> loginid;

            cout << "비밀번호: ";
            cin >> loginpw;
            cout << endl;

            if (loginpw == pw or loginid == id) {

                is_logged_in = true;
                cout << "===== 로그인 성공 =====";
            }
            else if (loginpw != pw and loginid != id) {

                is_logged_in = false;
                cout << "아이디 혹은 비밀번호가 틀렸습니다.";
                continue; // 로그인 실패 시 다시 메뉴를 출력
            }
        }
        cout << endl;

        if (is_logged_in) {
            cout << name << "님 환영합니다." << endl;
            cout << endl;
        }

        break;
    } 

            while (1) {
                cout << " **********swing 자산 관리 서비스 **********" << endl;
                cout << "1. 계좌 정보 출력 " << endl;
                cout << "2. 총 자산 출력" << endl;
                cout << "3. 로그아웃 " << endl;

                cout << "번호를 입력하세요 >>";
                cin >> b;

                if (b == 1) {
                    myaccount(bank_name, bank);

                    continue;
                }


                else if (b == 2) {

                    int sum = total(bank);
                    cout << endl;
                    cout << "현재 swing 자산관리 서비스에 등록된 회원님의 총 자산은 " << sum << "원 입니다." << endl;
                    cout << endl;

                    continue;

                }

                else if (b == 3) {

                    cout << endl << "===== 로그아웃 =====" << endl;
                    cout << endl;
                    cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;

                    break;
                }

                return 0;
            }
        }

