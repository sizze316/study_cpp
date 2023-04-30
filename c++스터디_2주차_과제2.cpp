// 정답 코드 받아서 붙여넣은 것이니 채점 안 해주셔도 돼요..! 지금 안 하면 깃허브 수정하는 것 까먹을 것 같아서 미리 올렸습니다 전.. 코드를 다 못 짰어여 ㅜㅜ


#include <iostream>
using namespace std;

int main(void) {

	int seat[10][6] = { };
	int a, width, length, new_length, new_width; // width=가로, length=세로

	while (1) {
		cout << " ** 비행기 좌석 예약 시스템 **" << endl << endl;
		cout << "1. 신규 예약" << endl;
		cout << "2. 예약 변경" << endl;
		cout << "3. 프로그램 종료" << endl << endl;
		cout << "번호를 입력하세요: ";
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

			cout << endl << "몇열, 몇번째 좌석을 예약하시겠습니까? ";
			cin >> length >> width;

			if (seat[length - 1][width - 1] == 0) {	//배열의 인덱스는 0부터 시작하므로 각각 1씩 빼준다.
				cout << "예약되었습니다." << endl << endl;
				seat[length - 1][width - 1] = 1; // 예약된 자리를 1로 바꿔준다.
			}

			else cout << "이미 예약된 자리입니다." << endl; // 해당 자리의 수가 0이 아닌 1일 경우 이미 예약된 자리임

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
			cout << endl << "현재 좌석과 변경하고자 하는 좌석을 각각 열, 번호 순서로 입력해 주세요: ";
			cin >> length >> width >> new_length >> new_width;
			if (seat[length - 1][width - 1] == 1) {
				if (seat[new_length - 1][new_width - 1] == 0) {
					seat[length - 1][width - 1] = 0;
					seat[new_length - 1][new_width - 1] = 1;
					cout << "좌석이 변경되었습니다." << endl;
				}
				else cout << "이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요." << endl;
			}
			else {
				cout << "좌석을 정확히 입력해 주세요." << endl;
			}
		}

		else if (a == 3) {
			cout << "프로그램을 종료합니다." << endl;			// 반복문 while이 무한반복되므로 좌석 예약하지 않을 시 반복문 탈출
			break;
		}

		else { cout << "올바른 숫자를 입력해 주세요." << endl; }

	}

	return 0;
}