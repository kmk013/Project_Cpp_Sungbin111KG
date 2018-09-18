#pragma once
#include "Blocks.h"
class SideBlock :
	public Blocks
{
public:
	SideBlock(int num, int i);

	void sideDraw();
	void sideblockMove();
};

