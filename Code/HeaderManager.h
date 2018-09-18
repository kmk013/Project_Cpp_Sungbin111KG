#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 65

#define BLACK 		   0
#define BLUE 		   1
#define GREEN 		   2
#define OAK 		   3
#define RED 		   4
#define PERPLE 		   5
#define YELLOW 		   6
#define WHITE 		   7
#define GRAY 		   8
#define LIGHTEDBLUE    9
#define LIGHTEDGREEN   10
#define LIGHTEDOAK 	   11
#define LIGHTEDRED 	   12
#define LIGHTEDPERPLE  13
#define LIGHTEDYELLOW  14
#define DARKEDWHITE    15

using namespace std;

void setConsoleTextColor(int color);

void setConsoleBackgroundColor(int color);

void gotoxy(int x, int y);

void enter(int num);

void SetCursor(bool bVisible);

//system("cls");

//system("mode con:cols= lines=");

//system("title Á¦¸ñ");
