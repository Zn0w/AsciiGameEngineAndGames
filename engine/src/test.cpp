#include <iostream>

main()
{
	int x, y;

	std::cin >> x;
	std::cin >> y;

	std::cout << "You set x to be " << x << std::endl;
	std::cout << "You set y to be " << y << std::endl;

	char map[x * y];

	int x_count = 0;
	for (int i = 0; i < x * y; i++)
	{
		map[i] = '*';
		std::cout << map[i] << " ";

		x_count++;

		if (x_count == x)
		{
			std::cout << "\n";
			x_count = 0;
		}
	}

	system("pause");
}