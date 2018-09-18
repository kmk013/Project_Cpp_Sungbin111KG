#include "Player.h"

Player::Player() {
	this->x = 60;
	this->y = 50;
	this->move = true;
	this->kg = 101.00f;
	this->hp = 10;
	this->moveCnt = 0;

	Animation(this->move);
}

void Player::Animation(bool move) {
	if (move) {
		gotoxy(this->x, this->y);
		cout << "             ~-                        " << endl;
		gotoxy(this->x, this->y + 1);
		cout << "            ,,,,     ~,~               " << endl;
		gotoxy(this->x, this->y + 2);
		cout << "            ,,,,-   -,,,~              " << endl;
		gotoxy(this->x, this->y + 3);
		cout << "            ,-~=@:-.~:@:-              " << endl;
		gotoxy(this->x, this->y + 4);
		cout << "          ::::. ;     @ ::::,          " << endl;
		gotoxy(this->x, this->y + 5);
		cout << "        :::::             ::::~        " << endl;
		gotoxy(this->x, this->y + 6);
		cout << "      ~:::::!!!!!!!!!!!!!!!:::::       " << endl;
		gotoxy(this->x, this->y + 7);
		cout << " ,,, .:::::!!!!!!!!!!!!!!!!:::::: ,,,, " << endl;
		gotoxy(this->x, this->y + 8);
		cout << ",,,,-::::::!!!!!!!!!!!!!!!!;::::: ,,,,-" << endl;
		gotoxy(this->x, this->y + 9);
		cout << "-----~:::::!!!!!!!!!!!!!!!!;::::: ---- " << endl;
		gotoxy(this->x, this->y + 10);
		cout << " ---  :::::!!!!!!!!!!!!!!!!:::::~      " << endl;
		gotoxy(this->x, this->y + 11);
		cout << "       :::::!!!!!!!!!!!!!!;::::,       " << endl;
		gotoxy(this->x, this->y + 12);
		cout << "         ::::!!!!!!!!!!!!;:::~         " << endl;
		gotoxy(this->x, this->y + 13);
		cout << "           ,:::!!!!!!!!!::~            " << endl;
		gotoxy(this->x, this->y + 14);
		cout << "                 ,::~                  " << endl;

	}
	else if (move == false) {
		gotoxy(this->x, this->y);
		cout << "              ,      ,,,               " << endl;
		gotoxy(this->x, this->y + 1);
		cout << "            -,,,    -,,,,              " << endl;
		gotoxy(this->x, this->y + 2);
		cout << "            ,,,,-,----,,,              " << endl;
		gotoxy(this->x, this->y + 3);
		cout << "           ~:::#@    !@::::.           " << endl;
		gotoxy(this->x, this->y + 4);
		cout << "        ,::::            :::::         " << endl;
		gotoxy(this->x, this->y + 5);
		cout << "  .    :::::!!!!;;;;;;;;;;:::::~       " << endl;
		gotoxy(this->x, this->y + 6);
		cout << ",,,,, :::::!!!!!!!!!!!!!!!!:::::~      " << endl;
		gotoxy(this->x, this->y + 7);
		cout << "-----::::::!!!!!!!!!!!!!!!!;:::::  ..  " << endl;
		gotoxy(this->x, this->y + 8);
		cout << " --- ::::::!!!!!!!!!!!!!!!!;::::: ,,,,." << endl;
		gotoxy(this->x, this->y + 9);
		cout << "      :::::!!!!!!!!!!!!!!!!:::::: ----," << endl;
		gotoxy(this->x, this->y + 10);
		cout << "      ,:::::!!!!!!!!!!!!!!!:::::  .--, " << endl;
		gotoxy(this->x, this->y + 11);
		cout << "        :::::!!!!!!!!!!!!!::::-        " << endl;
		gotoxy(this->x, this->y + 12);
		cout << "          -:::!!!!!!!!!!;:::           " << endl;
		gotoxy(this->x, this->y + 13);
		cout << "              .~:!!!!!:-               " << endl;

	}
}

void Player::Move(int num) {
	if (this->move == true)
		this->move = false;
	else if (this->move == false)
		this->move = true;

	if (num == 'a' || num == 'A') {
		gotoxy(this->x, this->y);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 1);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 2);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 3);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 4);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 5);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 6);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 7);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 8);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 9);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 10);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 11);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 12);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 13);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 14);
		cout << "                                       " << endl;

		if (this->x < 36) {}
		else {
			this->x -= rand() % (this->x - 38);
			this->moveCnt++;
		}
	}
	else if (num == 'd' || num == 'D') {
		gotoxy(this->x, this->y);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 1);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 2);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 3);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 4);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 5);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 6);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 7);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 8);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 9);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 10);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 11);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 12);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 13);
		cout << "                                       " << endl;
		gotoxy(this->x, this->y + 14);
		cout << "                                       " << endl;

		if (this->x > 86) {}
		else {
			this->x += rand() % (85 - this->x);
			this->moveCnt++;
		}
	}

	if (this->moveCnt % 5 == 0) {
		this->kg -= 0.1f;
	}

	Animation(this->move);
}