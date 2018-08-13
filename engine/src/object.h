#include <stdlib.h>
#include <iostream>

struct Object
{
	int x, y, box_width, box_height;
	bool* collision_map;
	char* view_map;

	Object(int x_pos, int y_pos, int w, int h)
		: x (x_pos), y (y_pos), box_width (w), box_height (h)
	{
		int map_size = box_width * box_height;

		collision_map = (bool*) malloc(sizeof(bool) * map_size);
		view_map = (char*) malloc(sizeof(char) * map_size);

		for (int i = 0; i < map_size; i++)
		{
			*(view_map + i) = '*';
		}

		for (int j = 0; j < map_size; j++)
		{
			std::cout << *(view_map + j) << std::endl;
		}
	}

	~Object()
	{
		free(collision_map);
		free(view_map);
	}
};