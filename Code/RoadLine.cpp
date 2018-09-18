#include "RoadLine.h"

RoadLine::RoadLine(int num)
{
	this->x = SCREEN_WIDTH / 2 - 2;
	this->y = 5 + num * 25;
}

void RoadLine::draw() {
	setConsoleBackgroundColor(LIGHTEDYELLOW);
	for (int i = this->y; i < i + 20; i++) {
		if (i > 0 && i < this->y + 20 && i < 65) {
			gotoxy(this->x, i);
			cout << "   ";
		}
		
	}
	setConsoleBackgroundColor(BLACK);
	setConsoleTextColor(WHITE);
}