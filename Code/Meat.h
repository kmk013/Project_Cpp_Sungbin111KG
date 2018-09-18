#pragma once
#include "Items.h"

class Meat :
	public Items
{
public:
	Meat();
	~Meat();

	void drawMeat();
	void meatInGround();
	void colliderCheck(Player* p);
};

