#include "Baekjoon_Step_06.h"

#include <iostream>
#include <list>
#include <utility>

int Baekjoon_Step_06::Solution()
{
	int final_price;
	int count;
	std::cin >> final_price;
	std::cin >> count;

	std::list<std::pair<int, int>> test_cast;

	for (int i = 0; i < count; ++i)
	{
		std::pair<int, int> numbers;
		std::cin >> numbers.first >> numbers.second;
		test_cast.push_back(numbers);
	}

	int result = 0;

	for (auto pair : test_cast)
	{
		result += pair.first * pair.second;
	}

	if (result == final_price)
	{
		std::cout << "Yes";
	}

	else
	{
		std::cout << "No";
	}

	return 0;
}
