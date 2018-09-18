#pragma once
#include "Blocks.h"

class Trash :
	public Blocks
{
public:
	Trash();
	~Trash();

	void drawTrash();
	void trashInGround();
	void colliderCheck(Player* p);
};

