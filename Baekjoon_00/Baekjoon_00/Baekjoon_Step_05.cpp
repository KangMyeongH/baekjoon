#include "Baekjoon_Step_05.h"
#include <iostream>

int Baekjoon_Step_05::Solution()
{
	int num;

	std::cin >> num;

	for (int i = 0; i < 9; ++ i)
	{
		std::cout << num << " * " << i + 1 << " = " << num * (i + 1) << '\n';
	}

	return 0;
}
