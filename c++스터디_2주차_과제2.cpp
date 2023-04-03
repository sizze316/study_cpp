#include <iostream>
using namespace std;

int main(void) {

	int seat[10][6] = { };
	int width, length; /* width=가로, length=세로*/

	cout << " ** 비행기 좌석 예약 시스템 **" << endl;
	cout << endl;

	int n;

	// 시작페이지 만들기
	cout << "1. 신규 예약" << endl;
	cout << "2. 예약 변경" << endl;
	cout << "3. 프로그램 종료" << endl;
	cout << "번호를 입력하세요: ";
	cin >> n;


	// 1을 선택한 경우
	if (n == 1) {
		cout << endl;
		cout << "1 2 3" << "\t" << "4 5 6" << endl;
		cout << "--------------" << endl;

		//for문 이용하여 통로가 있는 비행기 좌석 출력하기
		int arr[6][10] = { 0, };

		for (length = 0; length < 10; length++) {
			cout << endl;
			for (width = 0; width < 6; width++) {
				cout << arr[length] << " "<< arr[width] << " ";
			}
			cout << endl;
		}

		cout << endl << "몇 열, 몇 번째 좌석을 예약하시겠습니까?";
		cin >> length >> width;

		// if, else문 이용하여 좌석 예약하기, 이미 예약된 자리르 선택했다면 안내문 출력하기


	}

	// 2을 선택한 경우



	// 3을 입력한 경우
	if (n == 3) {
		cout << "프로그램을 종료합니다." << endl;
		exit(0);
	}


	// 1, 2, 3 이외의 수를 입력한 경우
	if (n != 1, 2, 3)
		cout << "올바른 숫자를 입력해주세요." << endl;

}







