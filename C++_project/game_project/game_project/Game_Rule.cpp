#include "Game_Rule.h"
#include "Common.h"
#include "Choice.h"
void gamerule() {
	system("cls");
	setcolor(7, 0);
	gotoxy(50, 6);
	cout << "게임 방법" << endl;
	gotoxy(30, 12);
	cout << "1. 도어락의 1부터 9까지의 음을 잘 들어보세요!" << endl;
	gotoxy(30, 14);

	cout << "2. 랜덤으로 들려주는 음을 듣고제한시간 안에 비밀번호를 맞추세요." << endl;
	gotoxy(30, 16);
	cout << "3. 제한시간 안에 5개의 비밀번호를 맞추면 1단계 성공!" << endl;
	gotoxy(30, 18);
	cout << "4. 제한시간 안에 8개의 비밀번호를 맞추면 2단계 성공!" << endl;
	gotoxy(30, 20);
	cout << "5. 제한시간 안에 10개의 비밀번호를 맞추면 3단계 성공!" << endl;
	gotoxy(30, 22);
	cout << "6. 단계가 높아질수록 비밀번호는 점점 어려워집니다!" << endl;

	rule_change();
}
//게임 방법