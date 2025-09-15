#include "Baekjoon_Step_08.h"

#include <iostream>
#include <list>
#include <vector>

int Baekjoon_Step_08::Solution()
{
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int count = 0;
	std::cin >> count;

	std::vector<std::pair<int, int>> test_case;
	test_case.reserve(count);

	for (int i = 0; i < count; ++i)
	{
		std::pair<int, int> pair;
		std::cin >> pair.first >> pair.second;
		test_case.push_back(pair);
	}

	for (int i = 0; i < count; ++i)
	{
		std::cout << "Case #" << i + 1 << ": " << test_case[i].first << " + " << test_case[i].second << " = " << test_case[i].first + test_case[i].second << '\n';
	}

	return 0;

	//int count = 0;
	//std::cin >> count;

	//std::vector<std::pair<int, int>> test_case;
	//test_case.reserve(count);

	//for (int i = 0; i < count; ++i)
	//{
	//	std::pair<int, int> pair;
	//	std::cin >> pair.first >> pair.second;
	//	test_case.push_back(pair);
	//}

	//for (auto& pair : test_case)
	//{
	//	std::cout << pair.first + pair.second << '\n';
	//}

	//return 0;
}
