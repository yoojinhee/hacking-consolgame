
#include"Choice.h"
Game_Play *gp = new Game_Play();
void writereview() {

	system("cls");
	int key=0;
	gotoxy(15, 13);
	cout << "게임 개발자에게 남기는 한마디 : ";
	FILE* review;
	fopen_s(&review, "review.txt", "w");
	string write;
	getline(cin, write);
	char *c = new char[write.length() + 1];
	strcpy(c, write.c_str());
	fputs(c, review);
	delete[] c;
	fclose(review);
	//gotoxy(20, 37);
	
		readreview();
	
	//return name;
}
void readreview() {
	int key=0;
	system("cls");
	//gotoxy(30, 5);
	gotoxy(20, 37);
	cout << "나갈려면 아무키나 누르세요...";
	
	char review[50];
	char name[30];
	FILE* re=fopen("review.txt", "r");
	FILE* na=fopen("name.txt", "r");
	//string write;
	//getline(cin, write);
	fgets(review, sizeof(review), re);
	fgets(name, sizeof(name), na);

	
	gotoxy(30, 5);
	cout << name<<"께서 남기신 한마디 : ";
	gotoxy(30, 7);
	cout << review<<"\n";	
	fclose(re);
	fclose(na);

	if (key == _getch()) {
		title();
		title_change();
	}
}

int title_menuchoice() {
	int x = 52, y = 18;
	gotoxy(x - 2, y);
	setcolor(7, 0);
	cout << "> 게임 시작" << endl;// 18
	gotoxy(x, y + 2);
	cout << "게임 방법" << endl;//20
	gotoxy(x, y + 4);
	cout << "스토리 보기" << endl;//22
	gotoxy(x, y + 6);
	cout << "개발자에게 남기는 한마디" << endl;//22
	gotoxy(x, y + 8);
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
			if (y < 26) {
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

int intro_skip(int i,int t) {

	int x = 100, y = 30;
	gotoxy(x - 2, y);
	cout << "> skip" << endl;//25
	//while (1) {//무한

	int n;
	
	while (1) {
		if (n = keycontrol()) {
			if (n == ENTER) {
				//cout << "T" << endl;
				return 1;
			}
		}
		Sleep(t);
		//if (n != keycontrol()) {
			cout << "1";
			return 0;
		//}
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
	
	while (1)
	{
		title();
		int title_menucode = title_menuchoice();
		if (title_menucode == 0) {//게임 시작
			//gp->game_screen();
			gp->ending3();
		}
		if (title_menucode == 2) {//게임 방법
			gamerule();
		}
		if (title_menucode == 4) {//스토리 보기
			system("cls");
			intro1();
		}
		if (title_menucode == 6) {//랭킹보기
			system("cls");
			writereview();
		}
		if (title_menucode == 8) {//랭킹보기
			exit(0);
		}
		system("cls");
	}
}
//title에서 전환

int intro_change(int i,int t) {
	while (1)
	{
		int intro = intro_skip(i,t);

		if (intro == 1) {//게임 시작
			cout << 1;
			title();
			title_change();
		}
		else if (intro == 0) {
			cout << "1";
			break;
		}
		return intro;
	}
}
//인트로 스킵으로 전환

int rule_menuchoice() {
	int x = 100, y = 25;
	gotoxy(x - 2, y);
	cout << "> 돌아 가기" << endl;//25
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
//////////게임방법 메뉴 선택
void rule_change() {
	//Game_Play *gp=new Game_Play();
	int rule_menucode = rule_menuchoice();
	while (1)
	{

		if (rule_menucode == 0) {//돌아 가기
			break;
		}
		if (rule_menucode == 2) {//게임 시작
			gp->game_screen();
			break;
		}
	}

}
//게임방법화면에서 전환
void gamerule()
{
	system("cls");
	setcolor(7, 0);
	gotoxy(50, 6);
	cout << "<게임 방법>" << endl;
	gotoxy(30, 12);
	cout << "1. 도어락의 1부터 9까지의 음을 잘 들어보세요!" << endl;
	gotoxy(30, 14);
	cout << "2. 랜덤으로 들려주는 음을 듣고 비밀번호를 맞추세요." << endl;
	gotoxy(30, 16);
	cout << "3. 1개의 음으로 이루어진 5개의 비밀번호를 맞추면 1단계 성공!" << endl;
	gotoxy(30, 18);
	cout << "4. 2개의 음으로 이루어진 5개의 비밀번호를 맞추면 1단계 성공!" << endl;
	gotoxy(30, 20);
	cout << "5. 3개의 음으로 이루어진 3개의 비밀번호를 맞추면 3단계 성공!" << endl;
	gotoxy(30, 22);
	cout << "6. 단계가 높아질수록 비밀번호는 점점 어려워집니다!" << endl;

	rule_change();
}
//게임 방법

void intro1() {
	int key;
	string name = Info_Input();
	system("cls");
	gotoxy(27, 10);
	cout << "가난하지만 가족들과 평범하고 행복하게 살고 있던 어느 날," << endl;
	gotoxy(35, 12);
	cout << "아침 일찍 문 앞에 편지 한 통이 와 있었다." << endl;
	//Sleep(3000);
	if(key=_getch())
		intro2(name);
}
string Info_Input() {
	
	gotoxy(35, 13);
	cout << "이름을 입력해주세요: ";
	FILE* namefile;
	fopen_s(&namefile, "name.txt", "w");
	string name;
	getline(cin, name);
	char *c = new char[name.length() + 1];
	strcpy(c, name.c_str());
	fputs(c, namefile);
	delete[] c;
	fclose(namefile);
	return name;
}
void intro2(string name) {
	system("cls");
	int key;
	gotoxy(24, 8);
	cout << "To. " << name << endl;
	gotoxy(24, 10);
	//setcolor(9, 0);
	cout << "이름 " << name << ", 나이 17살, 미림여자정보과학고등학교 재학 중," << endl;
	gotoxy(24, 12);
	cout << "난 너를 5살 때부터 알고 있었다." << endl;
	gotoxy(24, 14);
	cout << "너에 대한 정보는 더 알지만 시간이 없어서 빨리 설명하도록 하지." << endl;
	gotoxy(24, 16);
	cout << "얼마 전, 너희 가족이 아주 큰 빚을 진 걸로 알고 있다. 빚을 갚고 싶지 않나?" << endl;
	gotoxy(24, 18);
	cout << "내가 하는 제안을 받아드린다면 빚을 갚아주겠다. " << endl;
	gotoxy(24, 20);
	cout << "또한 너희 가족들이 앞으로도 돈 걱정 없이 풍족하게 살도록 도와주마" << endl;
	gotoxy(55, 22);
	cout << "…" << endl;
	gotoxy(55, 24);
	cout << "…" << endl;
	gotoxy(55, 26);
	cout << "…" << endl;
	if (key = _getch())
		intro3();
}
void intro3() {	
	system("cls");
	time_t timer;
	struct tm *t;
	timer = time(NULL);
	t = localtime(&timer);
	int key;
	gotoxy(18, 8);
	cout << "내 제안은 바로 미림여자정보과학고등학교의 서버를 해킹하라는거다. " << endl;
	gotoxy(18, 10);
	cout << "정확히 말하자면"<<t->tm_mon+1<<"월 "<< t->tm_mday<<"수행 시험날 이지. " << endl;
	gotoxy(18, 12);
	cout << "모든 학생들이 시험을 보지 못하도록 해킹해주기만 하면 된다." << endl;
	gotoxy(18, 14);
	cout << "사실 너를 미림여자정보과학고등학교에 다니게 한 것도 " << endl;
	gotoxy(18, 16);
	cout << t->tm_mon+1<<"월 "<<t->tm_mday<<"일 시험날에 해킹을 하기 위한 나의 위대한 계획이라고 할 수 있지, 우하하하" << endl;
	gotoxy(18, 18);
	cout << "선택은 너의 몫이다. 잘 생각해보거라. " << endl;
	gotoxy(18, 20);
	cout << "너의 선택으로 너의 가족들의 생계가 달렸다는 것도 잘 생각해 봐야한다. " << endl;
	gotoxy(18, 22);
	cout << "그럼 ㅃㅇ 우하하 " << endl;
	gotoxy(80, 24);
	cout << "From. 이호걸";
	if (key = _getch())
		intro4();
}
void intro4() {
	system("cls");
	int key;
	time_t timer;
	struct tm *t;
	timer = time(NULL);
	t = localtime(&timer);
	//setcolor(7, 0);
	gotoxy(45, 10);
	cout << "나쁘지 않다고 생각했다. " << endl;
	gotoxy(19, 12);
	cout << "그래서 결국 미림여자정보과학고등학교의 서버를 해킹하기로 하였다. 떨린다… " << endl;
	gotoxy(30, 14);
	cout << "바로 오늘이 "<<t->tm_mon+1<<"월 "<<t->tm_mday<<"일, 서버를 해킹하기 5분 전이다… " << endl;
	if (key = _getch())
	{

		while (1)
		{
			title();
			title_change();
			system("cls");
		}
	}
}
void title() {
	int x = 13, y = 6;
	system("cls");
	setcolor(1, 0);
	gotoxy(x, y);
	cout << "■    ■" << endl;
	gotoxy(x, y + 1);
	cout << "■    ■" << endl;
	gotoxy(x, y + 2);
	cout << "■■■■" << endl;
	gotoxy(x, y + 3);
	cout << "■    ■" << endl;
	gotoxy(x, y + 4);
	cout << "■    ■" << endl;
	////////////////////////////
	gotoxy(x + 8, y);
	cout << "    ■" << endl;
	gotoxy(x + 8, y + 1);
	cout << "  ■  ■" << endl;
	gotoxy(x + 8, y + 2);
	cout << "  ■■■" << endl;
	gotoxy(x + 8, y + 3);
	cout << "  ■  ■" << endl;
	gotoxy(x + 8, y + 4);
	cout << "  ■  ■" << endl;
	////////////////////////////
	gotoxy(x + 16, y);
	cout << "  ■■■" << endl;
	gotoxy(x + 16, y + 1);
	cout << "  ■" << endl;
	gotoxy(x + 16, y + 2);
	cout << "  ■" << endl;
	gotoxy(x + 16, y + 3);
	cout << "  ■" << endl;
	gotoxy(x + 16, y + 4);
	cout << "  ■■■" << endl;
	////////////////////////////
	gotoxy(x + 24, y);
	cout << "  ■" << endl;
	gotoxy(x + 24, y + 1);
	cout << "  ■  ■" << endl;
	gotoxy(x + 24, y + 2);
	cout << "  ■■" << endl;
	gotoxy(x + 24, y + 3);
	cout << "  ■■" << endl;
	gotoxy(x + 24, y + 4);
	cout << "  ■  ■" << endl;
	////////////////////////////
	gotoxy(x + 32, y);
	cout << "  ■" << endl;
	gotoxy(x + 32, y + 1);
	cout << "  ■" << endl;
	gotoxy(x + 32, y + 2);
	cout << "  ■" << endl;
	gotoxy(x + 32, y + 3);
	cout << "  ■" << endl;
	gotoxy(x + 32, y + 4);
	cout << "  ■" << endl;

	gotoxy(x + 36, y);
	cout << "  ■    ■" << endl;
	gotoxy(x + 36, y + 1);
	cout << "  ■    ■" << endl;
	gotoxy(x + 36, y + 2);
	cout << "  ■■  ■" << endl;
	gotoxy(x + 36, y + 3);
	cout << "  ■  ■■" << endl;
	gotoxy(x + 36, y + 4);
	cout << "  ■    ■" << endl;
	gotoxy(x + 46, y);
	cout << "    ■■" << endl;
	gotoxy(x + 46, y + 1);
	cout << "  ■" << endl;
	gotoxy(x + 46, y + 2);
	cout << "  ■■■■" << endl;
	gotoxy(x + 46, y + 3);
	cout << "  ■    ■" << endl;
	gotoxy(x + 46, y + 4);
	cout << "  ■■  ■" << endl;

	gotoxy(x + 62, y);
	cout << "    ■■" << endl;
	gotoxy(x + 62, y + 1);
	cout << "  ■" << endl;
	gotoxy(x + 62, y + 2);
	cout << "  ■■■■" << endl;
	gotoxy(x + 62, y + 3);
	cout << "  ■    ■" << endl;
	gotoxy(x + 62, y + 4);
	cout << "  ■■  ■" << endl;

	gotoxy(x + 72, y);
	cout << "  ■■■■" << endl;
	gotoxy(x + 72, y + 1);
	cout << "  ■    ■" << endl;
	gotoxy(x + 72, y + 2);
	cout << "  ■    ■" << endl;
	gotoxy(x + 72, y + 3);
	cout << "  ■    ■" << endl;
	gotoxy(x + 72, y + 4);
	cout << "  ■■■■" << endl;
	gotoxy(x + 84, y);
	cout << "  ■" << endl;
	gotoxy(x + 84, y + 1);
	cout << "  ■" << endl;
	gotoxy(x + 84, y + 2);
	cout << "  ■" << endl;
	gotoxy(x + 84, y + 3);
	cout << "   " << endl;
	gotoxy(x + 84, y + 4);
	cout << "  ■" << endl;
	//gotoxy(20, 10);//끝

}//
//hacking go!
///////////////////////////////////////////////////////////////
int cnt1 = 0;//game_DO 카운트




