#include"main.h"
#include"Choice.h"
#include"Common.h"
#include"Game_Rule.h"
int title_menuchoice() {
	int x = 52, y = 18;
	gotoxy(x - 2, y);
	setcolor(6, 0);
	cout << "> 게임 시작" << endl;//18
	//setcolor(7, 0);
	gotoxy(x, y + 2);
	cout << "게임 방법" << endl;//20
//	setcolor(7, 0);
	gotoxy(x, y + 4);
	cout << "게임 종료" << endl;//22

	while (1) {//무한
		int n = keycontrol();
		switch (n) {
		case UP: {
			if (y > 18) {//y는 22부터 18까지 이동

				gotoxy(x - 2, y);
				cout << " ";
				y -= 2;
				gotoxy(x - 2, y);
				cout << ">";

			}
			break;
		}
		case DOWN: {
			if (y < 22) {
				gotoxy(x - 2, y);
				cout << " ";
				y += 2;
				gotoxy(x - 2, y);
				cout << ">";
			}
			break;
		}
		case ENTER: {
			return y - 18;//0 2 4
		}
		}
	}
}
//메뉴 선택
int rule_menuchoice() {
	int x = 100, y = 25;
	gotoxy(x - 2, y);
	cout << "> 전 으로" << endl;//25
	gotoxy(x, y + 2);
	cout << "게임 시작" << endl;//27

	while (1) {//무한
		int n = keycontrol();
		switch (n) {
		case UP: {
			if (y > 25) {//y는 22부터 18까지 이동

				gotoxy(x - 2, y);
				cout << " ";
				y -= 2;
				gotoxy(x - 2, y);
				cout << ">";

			}
			break;
		}
		case DOWN: {
			if (y < 27) {
				gotoxy(x - 2, y);
				cout << " ";
				y += 2;
				gotoxy(x - 2, y);
				cout << ">";
			}
			break;
		}
		case ENTER: {
			return y - 25;//0 2
		}
		}
	}
}
//게임방법 메뉴 선택
int intro_skip() {
	int x = 100, y = 30;
	gotoxy(x - 2, y);
	cout << "> skip" << endl;//25

	while (1) {//무한
		int n = keycontrol();
		
		if(n=ENTER) {
			intro_change();
			return 0;//0 
		}
	}
}
//인트로 스킵 엔터
int keycontrol() {
	char temp = _getch();
	switch (temp) {
	case 72: return UP;//방향키 위
	case 80: return DOWN;//방향키 아래
	case 13: return ENTER;//엔터
	}
}
//방향키 및 엔터 아스키코드
void title_change() {
	int title_menucode = title_menuchoice();
	if (title_menucode == 0) {//게임 시작

	}
	if (title_menucode == 2) {//게임 방법
		gamerule();
	}
	if (title_menucode == 4) {//게임 종료
		exit(0);
	}
}
//title에서 전환
void rule_change() {
	int rule_menucode = rule_menuchoice();
	if (rule_menucode == 0) {//전으로
		
	}
	if (rule_menucode == 2) {//게임 시작
		system("cls");
	}

	system("pause>null");//아무키나 눌러주세요(감춤)
}
//게임방법화면에서 전환
void intro_change() {
	int intro = intro_skip();
	if (intro == 0) {//skip
		title();
		title_menuchoice();
	}

	system("pause>null");//아무키나 눌러주세요(감춤)
}
//인트로 스킵으로 전환