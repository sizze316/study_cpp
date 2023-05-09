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
		cout << " ********** swing 은행 **********" << endl;
		cout << "1. 회원가입 " << endl;
		cout << "2. 로그입" << endl;
		cout << "번호를 입력하세요 >> ";
		cin >> a;

		if (a == 1) {

			cout << endl;
			cout << "이름: " ;
			cin >> name;
			cout << "아이디: " ;
			cin >> id;
			cout << "비밀번호: " ;
			cin >> pw;

			cout << endl << "===== 회원가입 성공 =====" << endl;

		}

		else if (a == 2) {

			cout << "아이디: ";
			cin >> loginid;

			cout << "비밀번호: ";
			cin >> loginpw;
			cout << endl;

			if (loginpw == pw or loginid==id) {
				cout << "===== 로그인 성공 =====";
			}

			else if (loginpw != pw and loginid != id) {
				cout << "아이디 혹은 비밀번호가 틀렸습니다.";
			}
			

		} 


					cout << endl;

					cout << name << "님 환영합니다." << endl;
					cout << endl;

					while (1) {
						cout << " * *********swing 자산 관리 서비스 **********" << endl;
						cout << "1. 계좌 정보 출력 " << endl;
						cout << "2. 총 자산 출력" << endl;
						cout << "3. 로그아웃 " << endl;

						cout << "번호를 입력하세요 >>";
						cin >> b;

						if (b == 1) {

							void myaccount(); {

								cout << "-------------------------- swing 계좌 정보 --------------------------" << endl;
								cout << " " ;


							}
						}

						else if (b == 2) {

							
						}

						else if (b == 3) {

							cout << endl<< "===== 로그아웃 =====" << endl;
							cout << endl;
							cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;

							break;
						}
					} break;
				}
			}

	