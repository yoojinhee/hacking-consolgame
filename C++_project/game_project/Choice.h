#ifndef CHOICE_H
#define CHOICE_H
#define _CRT_SECURE_NO_WARNINGS

#include"Game_Play.h"
#include"Choice.h"
#include"Common.h"
#include"main.h"
#include<string>
#include<time.h>
#include<stdio.h>
using namespace std;

	
	
int title_menuchoice();
int rule_menuchoice();
int keycontrol();
void title_change();
void rule_change();
int intro_skip(int, int);
int intro_change(int, int);
void gamerule();
void intro1();
string Info_Input();
void intro2(string);
void intro3();
void intro4();
void title();
void writereview();
void readreview();
int review_menuchoice();
void review_change();
	

#endif