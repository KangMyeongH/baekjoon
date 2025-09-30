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
	// 스택의 오아시스 문제 풀다가 말았음.
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int count = 0;

	std::cin >> count;

	std::vector<int> height(count);

	for (auto& h : height)
	{
		std::cin >> h;
	}

	std::vector<int> NGE(count);
	std::stack<int> NGE_stack;

	NGE_stack.push(height[count - 1]);
	NGE[count - 1] = -1;

	for (int i = count - 2; i >= 0; --i)
	{
		int cur = height[i];

		while (!NGE_stack.empty() && NGE_stack.top() <= cur)
		{
			NGE_stack.pop();
		}

		if (NGE_stack.empty())
		{
			NGE[i] = -1;
		}

		else
		{
			NGE[i] = NGE_stack.top();
		}

		NGE_stack.push(cur);
	}

	std::vector<int> PGE(count);
	std::stack<int> PGE_stack;

	for (int i = 0; i < count; ++i)
	{
		int cur = height[i];

		while (!PGE_stack.empty() && PGE_stack.top() <= cur)
		{
			PGE_stack.pop();
		}

		if (PGE_stack.empty())
		{
			PGE[i] = -1;
		}

		else
		{
			PGE[i] = PGE_stack.top();
		}

		PGE_stack.push(cur);
	}



	return 0;
}