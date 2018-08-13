#include <iostream>

struct Player
{
	int x, y;
};

char map[10 * 10];
bool running;
Player player;

void drawMap()
{
	int x_count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (player.x + (player.y * 10) == i)
			std::cout << "* ";
		else
			std::cout << map[i] << " ";
		
		x_count++;

		if (x_count == 10)
		{
			std::cout << "\n";
			x_count = 0;
		}
	}
}

void handleInput()
{
	//if (GetAsyncKeyState())
}

main()
{
	for (int i = 0; i < 100; i++)
		map[i] = 'o';
	
	running = true;

	player.x = 1;
	player.y = 2;

	while (running)
	{
		system("cls");

		handleInput();
		drawMap();

		system("pause>nul");
	}
}