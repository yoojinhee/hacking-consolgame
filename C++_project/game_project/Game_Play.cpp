#include"Game_Play.h"
#include "Choice.h"
#include<iostream>
using namespace std;
//int a = 6, b = 2;//숫자 좌표
const char *num1[9][5][4] =
{
	{
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
		{
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
	},
	{
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
	},
	{
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
	},
	{
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ","■"},
		{"■","■","■","■"},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","■"},
		{"■","■","■","■"},
		{"■","  ","  ","■"},
		{"■","■","■","■"},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","■"},
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	}
};
const char *name[3][3] = { "낮은 도","낮은 레","낮은 미","낮은 파","낮은 솔","낮은 라","낮은 시","높은 도","높은 레" };
const char *level1[7][5][4] =
{
	{
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
	},
		{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
		{
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"  ","■","■","  "},
		{"  ","■","■","  "},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
	{
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	{
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
	},
	{
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	
};

const char *level2[7][5][4] =
{
	{
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
	},
		{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
		{
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"  ","■","■","  "},
		{"  ","■","■","  "},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
	{
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	{
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
	},
	{
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},

};

const char *level3[7][5][4] =
{
	{
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
		{"■","  ","  ","  "},
	},
		{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
		{
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"■","  ","  ","■"},
		{"  ","■","■","  "},
		{"  ","■","■","  "},
	},
	{
		{"■","■","■","■"},
		{"■","  ","  ","  "},
		{"■","■","■","■"},
		{"■","  ","  ",""},
		{"■","■","■","■"},
	},
	{
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
		{"  ","  ","  ","■"},
	},
	{
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
		{"  ","  ","  ","  "},
	},
	{
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
		{"  ","  ","  ","■"},
		{"■","■","■","■"},
	},

};
void Game_Play::game_screen() {
	system("cls");//새화면

	int a = -2, b = 2;//숫자 좌표
	int aa = -2, bb = 8;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			game_screen_num(cnt++, a += 14, b);
			gotoxy(a, bb);
			cout << name[i][j];
			game_DO(cnt);//이거 대신 처음에 소리 내주는 함수 넣기
		}
		a = -2, b += 7;//a는 초기화할때의 값과 같게/다음 줄로 넘어갈 때의 좌표
		bb += 7;
	}
	cnt1 = 0;//게임 재실행할때 음계가 계속 높아지지 않도록
	Sleep(1500);
	game_play1();
}
void Game_Play::game_screen1() {
	int a = -2, bb = 8;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			gotoxy(a+=14, bb);
			cout << name[i][j];
		}
	}
	a -= 2;
}
void Game_Play::game_screen_num(int q, int a, int b) {//1~9 표시
	gotoxy(25, 30);
	cout << "점수 : "<<0;
	
	for (int j = 0; j < 5; j++) {
		gotoxy(a, b += 1);
		for (int k = 0; k < 4; k++) {
			cout << num1[q][j][k];
		}
	}
	b -= 5;//제자리

}
void Game_Play::game_DO(int cnt) {//처음 음계 1~9들려주기
	int a[] = { 262,294,330,349,392,440,490,524,591 };//음계 도~높은 레
	if (cnt = ++cnt1) {
		Beep(a[cnt1 - 1], 700);
	}

}

void Game_Play::game_play1() {
	//int sec = 1000;
	int c = 0;
	int xx=40, yy=40;
	gotoxy(25, 28);
	cout << "level 1";
	
	int x = 52;
	gotoxy(32, 30);
	cout << 0;
	
	clock_t start,end;
	int key;
	int cnt2 = 0;
	int numcnt = 0;//채점 기준 점수
	int numcnt2 = 0;//화면에 나오는 점수
	float timer = 0;
	int as[] = { 0x01,0x02 ,0x03 ,0x04 ,0x05 ,0x06 ,0x07 ,0x08 ,0x09 };
	srand((int)time(NULL));
	start = clock();
	while (1) {

		numcnt = 0;
		int rd1 = rand() % 9;//랜덤으로 숫자 0~9
		play_do(rd1);				
		//cout << "  as[rd]"<<as[rd];
		//while()
		
		key = _getch();
		//cout << "  key"<<key;

		if (key -48== as[rd1]) {
			numcnt=1;
			//setcolor(1, 0);
			//cout<<num1[rd];
		//	cout << "맞"<<numcnt;
		}
		else {
			gotoxy(30, 32);
			cout << "땡";
			Sleep(200);
			gotoxy(30, 32);
			cout << "  ";
		}
		if (numcnt == 1) {
			numcnt2++;
			gotoxy(32, 30);
			cout << numcnt2;
		}
		if (numcnt2 == 5) {
			//cout << "긑";
			end = clock();			
			break;
		}
		
	}
	timer = (float)(end - start) / CLOCKS_PER_SEC;
	//cout << timer;
	//Sleep(100000);
	system("cls");
	Sleep(2000);
	game_play2(timer);
}
void Game_Play ::game_play2(float timer) {
	system("cls");
	gotoxy(25, 28);
	cout << "level 2";
	int rd2[2];
	int a = -2, b = 2,bb=8;//숫자 좌표
	int cnt = 0;
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			game_screen_num(cnt++, a += 14, b);
			gotoxy(a, bb);
			cout << name[i][j];
		}
		a = -2, b += 7,bb+=7;//a는 초기화할때의 값과 같게/다음 줄로 넘어갈 때의 좌표
	}
	
	
	clock_t start, end;
	int key[2];
	int cnt2 = 0;
	int numcnt = 0;//채점 기준 점수
	int numcnt2 = 0;//화면에 나오는 점수
	float timer1 = 0;
	int as[] = { 0x01,0x02 ,0x03 ,0x04 ,0x05 ,0x06 ,0x07 ,0x08 ,0x09 };
	start = clock();
	while (1) {
		numcnt = 0;
		for (int i = 0; i < 2; i++) {
			rd2[i] = rand() % 9;//랜덤으로 숫자 0~9
			play_do(rd2[i]);
			//cout << "rd2[i] " << rd2[i];
			
		}
		for (int i = 0; i < 2; i++) {
			key[i] = _getch();
			if( i==2) break;
			//cout << " key[i]" << key[i];
			//cout << " as[rd]" << as[rd];
			if (key[i] - 48 == as[rd2[i]]) {
				//cout << "맞 "<<key[i] - 48;
				numcnt++;
			}
		}
		if (numcnt == 2) {
			numcnt = 0;
			numcnt2++;
			gotoxy(32, 30);
			cout << numcnt2;
		}
		else {
			gotoxy(30, 32);
			cout << "땡";
			Sleep(200);
			gotoxy(30, 32);
			cout << "  ";
		}
		if (numcnt2 == 5) {
			end = clock();			
			break;
		}
	}

	timer1 = (float)(end - start) / CLOCKS_PER_SEC+timer;
	system("cls");
	Sleep(2000);
	game_play3(timer1);
}

void Game_Play::game_play3(float timer1) {
	system("cls");
	int rd2[3];
	gotoxy(25, 28);
	cout << "level 3";
	int a = -2, b = 2, bb = 8;//숫자 좌표
	int cnt = 0;
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			game_screen_num(cnt++, a += 14, b);
			gotoxy(a, bb);
			cout << name[i][j];
		}
		a = -2, b += 7, bb += 7;//a는 초기화할때의 값과 같게/다음 줄로 넘어갈 때의 좌표
	}
	
	clock_t start, end;
	int key[3];
	int cnt2 = 0;
	int numcnt = 0;//채점 기준 점수
	int numcnt2 = 0;//화면에 나오는 점수
	float timer2 = 0;
	int as[] = { 0x01,0x02 ,0x03 ,0x04 ,0x05 ,0x06 ,0x07 ,0x08 ,0x09 };
	start = clock();
	while (1) {
		numcnt = 0;
		for (int i = 0; i < 3; i++) {
			rd2[i] = rand() % 9;//랜덤으로 숫자 0~9
			play_do(rd2[i]);
			//cout << "rd2[i] " << rd2[i];

		}
		for (int i = 0; i < 3; i++) 
			key[i] = _getch();
			
			//cout << " key[i]" << key[i];
			//cout << " as[rd]" << as[rd];
			for (int i = 0; i < 3; i++) {
				if (key[i] - 48 == as[rd2[i]]) {
					//cout << "맞 " << key[i] - 48;
					numcnt++;
				}
			}

		if (numcnt == 3) {
			numcnt = 0;
			numcnt2++;
			gotoxy(32, 30);
			cout << numcnt2;
		}
		else {
			gotoxy(30, 32);
			cout << "땡";
			Sleep(200);
			gotoxy(30, 32);
			cout << "  ";
		}
		if (numcnt2 == 3) {
			end = clock();
			break;
		}
	}

	timer2 = (float)(end - start) / CLOCKS_PER_SEC + timer1;
//	game_play3(timer1);
	cout << timer2;
	if (timer2 >= 70)ending3();
	else if (timer2 >= 50)ending2();
	else if (timer2 >= 0)ending1();
}
void Game_Play::play_do(int rd) {
	int a[] = { 262,294,330,349,392,440,490,524,591 };
	Beep(a[rd], 700);
}
void Game_Play::ending1()
{
	system("cls");
	int key;
	setcolor(7, 0);
	gotoxy(30, 12);
	cout << "호걸 : 축하하네, 자네" << endl;
	if (key = _getch()) {
		gotoxy(30, 14);
		cout << "호걸 : 학교 서버를 해킹하는데 성공했다네 으하하!!" << endl;
	}
	if (key = _getch()) {
		gotoxy(30, 16);
		cout << "호걸 : 다음에도 부탁하면 꼭 자네가 도와주길 바라네 하하하하!!" << endl;
	}
	if (key = _getch()) {
		title();
		title_menuchoice();
	}
}
//게임 엔딩1
void Game_Play::ending2()
{
	system("cls");
	int key;
	setcolor(7, 0);
	gotoxy(30, 12);
	cout << "호걸 : 어휴, 아슬해라.." << endl;
	if (key = _getch()) {
		gotoxy(30, 14);
		cout << "호걸 : 학교 서버를 해킹하는데 성공했지만" << endl;
	}
	if (key = _getch()) {
		gotoxy(30, 16);
		cout << "호걸 : 다신 자네에게 도움을 바라고 싶지 않구만.." << endl;
	}
	if (key = _getch()) {
		title();
		title_menuchoice();
	}
}
//게임 엔딩2
void Game_Play::ending3()
{
	system("cls");
	int key;
	setcolor(7, 0);
	gotoxy(30, 12);
	cout << "호걸 : 썩 꺼져!" << endl;
	if (key = _getch()) {
		gotoxy(30, 14);
		cout << "호걸 : 다신 얼씬 거리지 말게 ㅉㅉ" << endl;
	}
	if (key = _getch()) {
		title();
		title_menuchoice();
	}
}
//게임 엔딩3


