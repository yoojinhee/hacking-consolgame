#ifndef GAME_PLAY_H
#define GAME_PLAY_H
#define _CRT_SECURE_NO_WARNINGS

#include"Common.h"

#include<iostream>
#include<time.h>
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
using namespace std;

class Game_Play {
public:
	void game_screen();
	void game_screen_num(int, int, int);
	void game_DO(int);
	void game_play1();
	void game_play2(float timer);
	void game_play3(float timer);
	void play_do(int rd);
	void ending1();
	void ending2();
	void ending3();
	void game_screen1();
	void writereview();
private:
	int cnt1 = 0;
	int num = 0;
	int rd;
};

	//int cnt1 = 0;




#endif