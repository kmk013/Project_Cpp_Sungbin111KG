#pragma once
#include "Blocks.h"

class Wall :
	public Blocks
{
public:
	Wall();
	~Wall();

	void drawWall();
	void wallInGround();
	void colliderCheck(Player *p);
};

