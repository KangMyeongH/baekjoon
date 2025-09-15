#include "Baekjoon_Step_02.h"

#include <iostream>

int Baekjoon_Step_02::Solution()
{
	int hour = 0;
	int minute = 0;
	int cook_minute = 0;
	int cook_hour = 0;

	std::cin >> hour >> minute;
	std::cin >> cook_minute;

	cook_hour = cook_minute / 60;
	cook_minute %= 60;

	minute += cook_minute;

	if (minute >= 60)
	{
		minute -= 60;
		cook_hour += 1;
	}

	hour += cook_hour;

	if (hour > 23)
	{
		hour -= 24;
	}

	std::cout << hour << " " << minute;

	return 0;
}
