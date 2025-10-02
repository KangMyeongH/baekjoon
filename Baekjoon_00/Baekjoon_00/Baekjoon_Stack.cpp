#include "Baekjoon_Stack.h"

#include <algorithm>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

int Baekjoon_Stack::Solution()
{
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	std::string testcase;

	std::cin >> testcase;

	std::stack<std::pair<char, int>> stack;

	int answer = 0;

	for (int i = 0; i < static_cast<int>(testcase.size()); ++i)
	{
		char cur = testcase[i];

		if (cur == ')')
		{
			if (stack.top().second == i - 1)
			{
				stack.pop();
				answer += static_cast<int>(stack.size());
			}

			else
			{
				stack.pop();
				answer += 1;
			}

			continue;
		}

		stack.emplace(cur, i);
	}

	std::cout << answer;

	return 0;
}
