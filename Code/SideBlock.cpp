#include "SideBlock.h"

SideBlock::SideBlock(int num, int i)
{
	this->x = 2 + num * 128;
	this->y = -10 + i * 22;
}

void SideBlock::sideDraw() {
	setConsoleBackgroundColor(OAK);
	if (this->y > 0 && this->y < 65) {
		gotoxy(this->x, this->y);
		cout << "                              " << endl;
	}
	if (this->y + 1 > 0 && this->y + 1 < 65) {
		gotoxy(this->x, this->y + 1);
		cout << "                              " << endl;
	}
	if (this->y + 2 > 0 && this->y + 2 < 65) {
		gotoxy(this->x, this->y + 2);
		cout << "                              " << endl;
	}
	if (this->y + 3 > 0 && this->y + 3 < 65) {
		gotoxy(this->x, this->y + 3);
		cout << "                              " << endl;
	}
	if (this->y + 4 > 0 && this->y + 4 < 65) {
		gotoxy(this->x, this->y + 4);
		cout << "                              " << endl;
	}
	if (this->y + 5 > 0 && this->y + 5 < 65) {
		gotoxy(this->x, this->y + 5);
		cout << "                              " << endl;
	}
	if (this->y + 6> 0 && this->y + 6< 65) {
		gotoxy(this->x, this->y + 6);
		cout << "                              " << endl;
	}
	if (this->y + 7> 0 && this->y +7< 65) {
		gotoxy(this->x, this->y + 7);
		cout << "                              " << endl;
	}
	if (this->y +8> 0 && this->y +8< 65) {
		gotoxy(this->x, this->y + 8);
		cout << "                              " << endl;
	}
	if (this->y +9> 0 && this->y +9< 65) {
		gotoxy(this->x, this->y + 9);
		cout << "                              " << endl;
	}
	if (this->y +10> 0 && this->y +10< 65) {
		gotoxy(this->x, this->y + 10);
		cout << "                              " << endl;
	}
	if (this->y +11> 0 && this->y +11< 65) {
		gotoxy(this->x, this->y + 11);
		cout << "                              " << endl;
	}
	if (this->y +12> 0 && this->y +12< 65) {
		gotoxy(this->x, this->y + 12);
		cout << "                              " << endl;
	}
	if (this->y +13> 0 && this->y +13< 65) {
		gotoxy(this->x, this->y + 13);
		cout << "                              " << endl;
	}
	if (this->y +14> 0 && this->y +14< 65) {
		gotoxy(this->x, this->y + 14);
		cout << "                              " << endl;
	}
	if (this->y +15> 0 && this->y +15< 65) {
		gotoxy(this->x, this->y + 15);
		cout << "                              " << endl;
	}
	if (this->y +16> 0 && this->y +16< 65) {
		gotoxy(this->x, this->y + 16);
		cout << " ";
		gotoxy(this->x + 29, this->y + 16);
		cout << " ";
	}
	if (this->y +17> 0 && this->y +17< 65) {
		gotoxy(this->x, this->y + 17);
		cout << " ";
		gotoxy(this->x + 29, this->y + 17);
		cout << " ";
	}
	if (this->y +18 > 0 && this->y +18< 65) {
		gotoxy(this->x, this->y + 18);
		cout << " ";
		gotoxy(this->x + 29, this->y + 18);
		cout << " ";
	}
	if (this->y +19> 0 && this->y +19< 65) {
		gotoxy(this->x, this->y + 19);
		cout << "                              " << endl;
	}
	setConsoleBackgroundColor(BLACK);
	setConsoleTextColor(WHITE);
}

void SideBlock::sideblockMove() {
	setConsoleBackgroundColor(BLACK);
	for (int i = this->y; i < this->y + 20; i++) {
		for (int j = this->x; j < this->x + 30; j++) {
			if (i > 0 && i < 65) {
				gotoxy(j, i);
				cout << " ";
			}
		}
	}
	setConsoleTextColor(WHITE);
}