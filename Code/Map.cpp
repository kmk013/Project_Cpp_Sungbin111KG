#include "Map.h"

void Map::drawMap() {
	setConsoleBackgroundColor(WHITE);
	for (int i = 1; i < 66; i++) {
		gotoxy(33, i);
		cout << " ";
		gotoxy(34, i);
		cout << " ";
		gotoxy(36, i);
		cout << " ";
		gotoxy(37, i);
		cout << " ";
		gotoxy(124, i);
		cout << " ";
		gotoxy(125, i);
		cout << " ";
		gotoxy(127, i);
		cout << " ";
		gotoxy(128, i);
		cout << " ";
	}

	for (int i = 38; i < 124; i++) {
		gotoxy(i, 4);
		cout << " ";
	}

	setConsoleBackgroundColor(BLACK);
	setConsoleTextColor(WHITE);
}