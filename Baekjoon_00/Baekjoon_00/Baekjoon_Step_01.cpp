#include "Baekjoon_Step_01.h"

#include <iostream>

int Baekjoon_Step_01::Solution()
{
	int hour = 0, minute = 0;

	std::cin >> hour >> minute;

	minute -= 45;

	if (minute < 0)
	{
		hour -= 1;
		minute += 60;
	}

	if (hour < 0)
	{
		hour = 23;
	}

	std::cout << hour << " " << minute << '\n';

	return 0;
}
