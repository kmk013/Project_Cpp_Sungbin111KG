#include "Bread.h"

Bread::Bread()
{
	this->x = rand() % 72 + 38;
	this->y = 5;
	this->dropSpeed = rand() % 5 + 1;
	this->chk = true;

	drawBread();
}

Bread::~Bread()
{

	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 1);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 2);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 3);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 4);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 5);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 6);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 7);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 8);
		cout << "             ";
	}
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y + 9);
		cout << "             ";
	}

	this->chk = false;
}

void Bread::drawBread() {
	if (this->chk) {
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 1);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 2);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 3);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 4);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 5);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 6);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 7);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 8);
			cout << "             ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 9);
			cout << "             ";
		}

		this->y += dropSpeed;

		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y);
			cout << "    ######## ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 1);
			cout << "  #~~-,~::;:#";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 2);
			cout << "#    ~~;::::#";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 3);
			cout << "@      :::::#";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 4);
			cout << "$      ;::,# ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 5);
			cout << " #     :-,,# ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 6);
			cout << " #    .,,,,# ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 7);
			cout << " #     ,,.#  ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 8);
			cout << " ##    ##    ";
		}
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y + 9);
			cout << "     ##      ";
		}
	}
}

void Bread::breadInGround() {
	if (this->chk) {
		if (this->y + 15 >= 65) {
			this->~Bread();
		}
	}
}

void Bread::colliderCheck(Player *p) {
	if (this->chk) {
		if ((this->x >= p->x && this->x <= p->x + 39) ||
			(this->x + 1 >= p->x && this->x + 1 <= p->x + 39) ||
			(this->x + 2 >= p->x && this->x + 2 <= p->x + 39) ||
			(this->x + 3 >= p->x && this->x + 3 <= p->x + 39) ||
			(this->x + 4 >= p->x && this->x + 4 <= p->x + 39) ||
			(this->x + 5 >= p->x && this->x + 5 <= p->x + 39) ||
			(this->x + 6 >= p->x && this->x + 6 <= p->x + 39) ||
			(this->x + 7 >= p->x && this->x + 7 <= p->x + 39) ||
			(this->x + 8 >= p->x && this->x + 8 <= p->x + 39) ||
			(this->x + 9 >= p->x && this->x + 9 <= p->x + 39) ||
			(this->x + 10 >= p->x && this->x + 10 <= p->x + 39) ||
			(this->x + 11 >= p->x && this->x + 11 <= p->x + 39) ||
			(this->x + 12 >= p->x && this->x + 12 <= p->x + 39))
			if ((this->y >= p->y && this->y <= p->y + 14) ||
				(this->y + 1 >= p->y && this->y + 1 <= p->y + 14) ||
				(this->y + 2 >= p->y && this->y + 2 <= p->y + 14) ||
				(this->y + 3 >= p->y && this->y + 3 <= p->y + 14) ||
				(this->y + 4 >= p->y && this->y + 4 <= p->y + 14) ||
				(this->y + 5 >= p->y && this->y + 5 <= p->y + 14) ||
				(this->y + 6 >= p->y && this->y + 6 <= p->y + 14) ||
				(this->y + 7 >= p->y && this->y + 7 <= p->y + 14) ||
				(this->y + 8 >= p->y && this->y + 8 <= p->y + 14) ||
				(this->y + 9 >= p->y && this->y + 9 <= p->y + 14)) {
				p->kg += 0.3f;
				this->~Bread();
			}
	}
}