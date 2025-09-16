#include "Baekjoon_Step_08.h"

#include <algorithm>
#include <iostream>
#include <limits>			// std::numeric_limits<int>::max();
#include <vector>

int Baekjoon_Step_08::Solution()
{
	// 이건 좀 고민된888
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	std::vector<int> test_cast;
	test_cast.resize(28);

	for (int i = 0; i < 28; ++i)
	{
		std::cin >> test_cast[i];
	}

	std::vector<int> students;
	students.reserve(30);

	for (int i = 0; i < 30; ++i)
	{
		students.push_back(i + 1);
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
