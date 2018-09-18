#pragma once
#include "Items.h"

class Bread :
	public Items
{
public:
	Bread();
	~Bread();

	void drawBread();
	void breadInGround();
	void colliderCheck(Player* p);
};

