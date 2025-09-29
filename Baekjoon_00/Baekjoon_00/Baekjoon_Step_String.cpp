#include "Baekjoon_Step_String.h"

#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <unordered_map>
#include <limits>
#include <stack>
#include <vector>

int Baekjoon_Step_String::Solution()
{
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int tower_count = 0;

	std::cin >> tower_count;

	std::vector<int> tower_height(tower_count);

	for (auto& height : tower_height)
	{
		std::cin >> height;
	}

	std::stack<std::pair<int, int>> stack;

	int result = 0;

	stack.emplace(tower_height[tower_count - 1], tower_count - 1);
	// 단조 스택
	for (int i = tower_count - 2; i >= 0; --i)
	{
		int cur = tower_height[i];

		while (!stack.empty() && stack.top().first <= cur)
		{
			stack.pop();
		}
		// 잠깐 외출
		result += stack.top().second - i;

		stack.emplace(cur, i);
	}

	std::cout << result;

	return 0;
}

//int tower_count = 0;
//std::cin >> tower_count;

//std::vector<int> tower(tower_count);

//for (int i = 0; i < tower_count; ++i)
//{
//	std::cin >> tower[i];
//}

//std::vector<int> answer(tower_count);
//std::stack<std::pair<int, int>> stack;

//for (int i = 0; i < tower_count; ++i)
//{
//	int cur = tower[i];

//	while (!stack.empty() && stack.top().first < cur)
//	{
//		stack.pop();
//	}

//	answer[i] = stack.empty() ? 0 : stack.top().second;
//	stack.emplace(cur, i + 1);
//}

//for (const auto num : answer)
//{
//	std::cout << num << ' ';
//}