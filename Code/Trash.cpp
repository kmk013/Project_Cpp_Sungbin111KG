#include "Trash.h"

Trash::Trash()
{
	this->x = rand() % 73 + 38;
	this->y = 5;
	this->dropSpeed = rand() % 5 + 1;
	this->chk = true;

	drawTrash();
}

Trash::~Trash() {
	if (this->y > 4 && this->y < 65) {
		gotoxy(this->x, this->y);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 1 < 65) {
		gotoxy(this->x, this->y + 1);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 2 < 65) {
		gotoxy(this->x, this->y + 2);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 3 < 65) {
		gotoxy(this->x, this->y + 3);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 4 < 65) {
		gotoxy(this->x, this->y + 4);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 5< 65) {
		gotoxy(this->x, this->y + 5);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 6< 65) {
		gotoxy(this->x, this->y + 6);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 7< 65) {
		gotoxy(this->x, this->y + 7);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 8< 65) {
		gotoxy(this->x, this->y + 8);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 9< 65) {
		gotoxy(this->x, this->y + 9);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 10< 65) {
		gotoxy(this->x, this->y + 10);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 11< 65) {
		gotoxy(this->x, this->y + 11);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 12< 65) {
		gotoxy(this->x, this->y + 12);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 13< 65) {
		gotoxy(this->x, this->y + 13);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 14< 65) {
		gotoxy(this->x, this->y + 14);
		cout << "              ";
	}
	if (this->y > 4 && this->y + 15< 65) {
		gotoxy(this->x, this->y + 15);
		cout << "              ";
	}

	this->chk = false;
}

void Trash::drawTrash() {
	if (this->chk) {
		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 1 < 65) {
			gotoxy(this->x, this->y + 1);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 2 < 65) {
			gotoxy(this->x, this->y + 2);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 3 < 65) {
			gotoxy(this->x, this->y + 3);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 4 < 65) {
			gotoxy(this->x, this->y + 4);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 5 < 65) {
			gotoxy(this->x, this->y + 5);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 6 < 65) {
			gotoxy(this->x, this->y + 6);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 7 < 65) {
			gotoxy(this->x, this->y + 7);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 8 < 65) {
			gotoxy(this->x, this->y + 8);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 9 < 65) {
			gotoxy(this->x, this->y + 9);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 10 < 65) {
			gotoxy(this->x, this->y + 10);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 11 < 65) {
			gotoxy(this->x, this->y + 11);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 12 < 65) {
			gotoxy(this->x, this->y + 12);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 13 < 65) {
			gotoxy(this->x, this->y + 13);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 14 < 65) {
			gotoxy(this->x, this->y + 14);
			cout << "              ";
		}
		if (this->y > 4 && this->y + 15 < 65) {
			gotoxy(this->x, this->y + 15);
			cout << "              ";
		}

		this->y += dropSpeed;

		if (this->y > 4 && this->y < 65) {
			gotoxy(this->x, this->y);
			cout << "  ##########  ";
		}
		if (this->y > 4 && this->y + 1 < 65) {
			gotoxy(this->x, this->y + 1);
			cout << "##############";
		}
		if (this->y > 4 && this->y + 2 < 65) {
			gotoxy(this->x, this->y + 2);
			cout << "###       ####";
		}
		if (this->y > 4 && this->y + 3 < 65) {
			gotoxy(this->x, this->y + 3);
			cout << "##          ##";
		}
		if (this->y > 4 && this->y + 4 < 65) {
			gotoxy(this->x, this->y + 4);
			cout << "###       ####";
		}
		if (this->y > 4 && this->y + 5 < 65) {
			gotoxy(this->x, this->y + 5);
			cout << "##############";
		}
		if (this->y > 4 && this->y + 6 < 65) {
			gotoxy(this->x, this->y + 6);
			cout << "##############";
		}
		if (this->y > 4 && this->y + 7 < 65) {
			gotoxy(this->x, this->y + 7);
			cout << " ############ ";
		}
		if (this->y > 4 && this->y + 8 < 65) {
			gotoxy(this->x, this->y + 8);
			cout << " ############ ";
		}
		if (this->y > 4 && this->y + 9 < 65) {
			gotoxy(this->x, this->y + 9);
			cout << " ############ ";
		}
		if (this->y > 4 && this->y + 10 < 65) {
			gotoxy(this->x, this->y + 10);
			cout << " ############ ";
		}
		if (this->y > 4 && this->y + 11 < 65) {
			gotoxy(this->x, this->y + 11);
			cout << " ############ ";
		}
		if (this->y > 4 && this->y + 12 < 65) {
			gotoxy(this->x, this->y + 12);
			cout << " ###########  ";
		}
		if (this->y > 4 && this->y + 13 < 65) {
			gotoxy(this->x, this->y + 13);
			cout << "  ##########  ";
		}
		if (this->y > 4 && this->y + 14 < 65) {
			gotoxy(this->x, this->y + 14);
			cout << "  ##########  ";
		}
		if (this->y > 4 && this->y + 15 < 65) {
			gotoxy(this->x, this->y + 15);
			cout << "   ########   ";
		}
	}
}

void Trash::trashInGround() {
	if (this->chk) {
		if (this->y + 15 >= 65) {
			this->~Trash();
		}
	}
}

void Trash::colliderCheck(Player* p) {
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
			(this->x + 12 >= p->x && this->x + 12 <= p->x + 39) ||
			(this->x + 13 >= p->x && this->x + 13 <= p->x + 39) ||
			(this->x + 14 >= p->x && this->x + 14 <= p->x + 39))
			if ((this->y >= p->y && this->y <= p->y + 14) ||
				(this->y + 1 >= p->y && this->y + 1 <= p->y + 14) ||
				(this->y + 2 >= p->y && this->y + 2 <= p->y + 14) ||
				(this->y + 3 >= p->y && this->y + 3 <= p->y + 14) ||
				(this->y + 4 >= p->y && this->y + 4 <= p->y + 14) ||
				(this->y + 5 >= p->y && this->y + 5 <= p->y + 14) ||
				(this->y + 6 >= p->y && this->y + 6 <= p->y + 14) ||
				(this->y + 7 >= p->y && this->y + 7 <= p->y + 14) ||
				(this->y + 8 >= p->y && this->y + 8 <= p->y + 14) ||
				(this->y + 9 >= p->y && this->y + 9 <= p->y + 14) ||
				(this->y + 10 >= p->y && this->y + 10 <= p->y + 14) ||
				(this->y + 11 >= p->y && this->y + 11 <= p->y + 14) ||
				(this->y + 12 >= p->y && this->y + 12 <= p->y + 14) ||
				(this->y + 13 >= p->y && this->y + 13 <= p->y + 14) ||
				(this->y + 14 >= p->y && this->y + 14 <= p->y + 14)) {
				p->hp--;
				p->kg--;
				this->~Trash();
			}
	}
}