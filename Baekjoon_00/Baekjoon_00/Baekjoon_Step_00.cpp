#include "Baekjoon_Step_00.h"
#include <iostream>

int Baekjoon_Step_00::Solution()
{
	bool x_sign = true, y_sign = true;
	int x, y;

	std::cin >> x;
	std::cin >> y;

	x < 0 ? (x_sign = false) : (x_sign = true);
	y < 0 ? (y_sign = false) : (y_sign = true);

	if (x_sign)
	{
		if (y_sign)
		{
			std::cout << "1";
		}

		else
		{
			std::cout << "4";
		}
	}

	else
	{
		if (y_sign)
		{
			std::cout << "2";
		}

		else
		{
			std::cout << "3";
		}
	}

	return 0;
}
