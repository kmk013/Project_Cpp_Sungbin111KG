#include "StartScene.h"
#include "GameScene.h"
#include "EndingScene.h"

int main() {
	system("mode con:cols=160 lines=65");
	system("title Á¦¸ñ");
	SetCursor(false);
	srand((unsigned int)time(NULL));

	gotoxy(1, 18);
	title();
	gotoxy(1, 48);
	pressTostart();

	getch();
	GameScene();

	return 0;
}

void title() {

	cout << "                                       @    @   @   @  @    @@    @    @@@   @                                    " << endl;
	cout << "                                       @    @   @   @  @    @@    @    @@@   @                                    " << endl;
	cout << "                                       @    @   @   @  @   @  @   @   @   @  @        @     @     @   @   @   @@@@" << endl;
	cout << "                                      @@ @@@@   @@@@@  @  @    @  @   @   @  @      @@@   @@@   @@@   @  @  @@    " << endl;
	cout << "                                     @  @   @   @   @  @  @    @  @   @   @  @        @     @     @   @ @   @     " << endl;
	cout << "                                    @    @  @   @@@@@  @  @    @  @    @@@   @        @     @     @   @@    @     " << endl;
	cout << "                                            @          @   @  @   @          @        @     @     @   @@    @  @@@" << endl;
	cout << "                                       @@@@@     @     @    @@    @          @        @     @     @   @ @   @    @" << endl;
	cout << "                                      @     @    @                @  @@@@@@@@@        @     @     @   @  @  @    @" << endl;
	cout << "                                      @     @    @                @          @        @     @     @   @   @  @@@@@" << endl;
	cout << "                                       @@@@@     @@@@@@@          @          @                                    " << endl;
}

void pressTostart() {
	cout << "                                                                                                                            __  __ " << endl;
	cout << "                        _____                                         _                _                _              _   |  ||  |" << endl;
	cout << "                       |  _  | ___  ___  ___  ___    ___  ___  _ _   | |_  ___  _ _   | |_  ___    ___ | |_  ___  ___ | |_ |  ||  |" << endl;
	cout << "                       |   __||  _|| -_||_ -||_ -|  | .'||   || | |  | '_|| -_|| | |  |  _|| . |  |_ -||  _|| .'||  _||  _||__||__|" << endl;
	cout << "                       |__|   |_|  |___||___||___|  |__,||_|_||_  |  |_,_||___||_  |  |_|  |___|  |___||_|  |__,||_|  |_|  |__||__|" << endl;
	cout << "                                                              |___|            |___|                                               " << endl;
}