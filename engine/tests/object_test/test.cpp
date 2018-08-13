#include "../../src/object.h"

#include <iostream>

int main()
{
	Object test_object(2, 2, 7, 3);

	/*for (int i = 0; i < 12; i++)
	{
		std::cout << *(test_object.view_map + i) << std::endl;
	}*/
	//char* p = test_object.view_map;

	//std::cout << *(p + 1) << std::endl;

	system("pause");
}