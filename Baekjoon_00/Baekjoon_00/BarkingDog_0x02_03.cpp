#include "BarkingDog_0x02_03.h"

#include <iostream>

int BarkingDog_0x02_03::Solution()
{
	int num[3];

	for (int i {}; i < 3; ++i)
	{
		std::cin >> num[i];
	}

	int calcResult{ num[0] * num[1] * num[2] };

	int result[10] = {};

	while (calcResult > 0)
	{
		int remain = calcResult % 10;
		result[remain]++;
		calcResult /= 10;
	}

	for (auto resultNum : result)
	{
		std::cout << resultNum << '\n';
	}

	return 0;
}
