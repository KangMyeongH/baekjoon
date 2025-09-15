#include "Baekjoon_Step_07.h"

#include <iostream>

int Baekjoon_Step_07::Solution()
{
	int byte = 0;

	std::cin >> byte;

	int long_count = byte / 4;

	for (int i = 0; i < long_count; ++i)
	{
		std::cout << "long ";
	}

	std::cout << "int";

	return 0;
}
