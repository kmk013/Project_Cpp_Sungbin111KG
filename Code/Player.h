#pragma once
#include "HeaderManager.h"

class Player
{
private:
	bool move;
public:
	Player();
	int x, y;
	float kg;
	int hp;
	int moveCnt;

	void Animation(bool move);
	void Move(int num);

	bool getMove() {
		return this->move;
	}
};

