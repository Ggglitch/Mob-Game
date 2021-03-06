#include "pch.h"
#include "TopDownEngine/Utility.h"
#include "TopDownEngine/Player.h"
#include "TopDownEngine/Game.h"
#include "TopDownEngine/Color.h"

int main()
{
	setlocale(LC_ALL, "rus");
	showConsoleCursor(false);

	Borders borders(0, 1, 40, 20);
	setConsoleWindowSize(borders.right, borders.bottom);

	Controller controller;

	Player player(controller, '@', 1, FG_LIGHTGREEN);

	Mob mob('M', 1, FG_LIGHTMAGENTA);

	Game game(borders, &player, &mob, 5);

	game.run(110);
}
