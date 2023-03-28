#include <iostream>
using namespace std;

int main() {

	char name[10];

	cout << "이름: ";
	cin.getline(name, 10);

	cout << "학번: 2023" << endl;

	cout << "반갑습니다." << name << "님.\n" << endl;

	cout << "학점 입력을 시작합니다.\n" << endl;

	cout << "========== SWING 31 ==========\n";
	
	double a, b, c, d;

	cout << "C프로그래밍(3학점): ";
	cin >> a;

	cout << "컴퓨터및정보보호개론(3학점): ";
	cin.ignore();
	cin >> b;

	cout << "소프트웨어개발실무영어Ⅰ(1학점): ";
	cin.ignore();
	cin >> c;

	cout << "대학고급영어(2학점): ";
	cin.ignore();
	cin >> d;


	cout << "==============================\n";

	cout << "김 스윙(2023)님의 전체 학점은 " << (((a*3)+(b*3)+(c*1)+(d*2))/9) << "입니다.\n" << endl;
	

	return 0;
}
