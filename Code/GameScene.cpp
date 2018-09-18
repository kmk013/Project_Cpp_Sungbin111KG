#include "HeaderManager.h"
#include "GameScene.h"

void GameScene() {
	system("cls");

	Map *mainMap = new Map();
	Player *mainPlayer = new Player();
	SideBlock *mainBlock[10];

	Wall *mainWall[100];
	Trash *mainTrash[100];
	Bread *mainBread[100];
	Meat *mainMeat[100];

	int wallNum = -1;
	int trashNum = -1;
	int breadNum = -1;
	int meatNum = -1;

	int itemRand;

	for (int i = 0; i < 10; i++) {
		mainBlock[i] = new SideBlock(i % 2, i / 2);
		mainBlock[i]->sideDraw();
	}

	mainMap->drawMap();
	
	while (true) {
		
		if (mainPlayer->moveCnt % 15 == 0) {
			itemRand = rand() % 2;

			switch (itemRand) {
			case 0:
				mainWall[++wallNum] = new Wall();
				break;
			case 1:
				mainTrash[++trashNum] = new Trash();
				break;
			}

			itemRand = rand() % 2;

			switch (itemRand) {
			case 0:
				mainBread[++breadNum] = new Bread();
				break;
			case 1:
				mainMeat[++meatNum] = new Meat();
				break;
			}
		}
		
		for (int i = 0; i <= wallNum; i++) {
			mainWall[i]->drawWall();
			mainWall[i]->colliderCheck(mainPlayer);
			mainWall[i]->wallInGround();
		}

		for (int i = 0; i <= trashNum; i++) {
			mainTrash[i]->drawTrash();
			mainTrash[i]->colliderCheck(mainPlayer);
			mainTrash[i]->trashInGround();
		}

		for (int i = 0; i <= breadNum; i++) {
			mainBread[i]->drawBread();
			mainBread[i]->colliderCheck(mainPlayer);
			mainBread[i]->breadInGround();
		}

		for (int i = 0; i <= meatNum; i++) {
			mainMeat[i]->drawMeat();
			mainMeat[i]->colliderCheck(mainPlayer);
			mainMeat[i]->meatInGround();
		}

		gotoxy(39, 2);
		cout << "                    ";
		gotoxy(60, 2);
		cout << "                    ";

		gotoxy(39, 2);
		cout << "¸ö¹«°Ô " << mainPlayer->kg << "KG";
		gotoxy(60, 2);
		cout << "Ã¼·Â " << mainPlayer->hp;

		if (mainPlayer->hp <= 0)
			break;

		mainPlayer->Move(getch());
	}

	endingScene();
}