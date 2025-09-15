#include "Baekjoon_Step_03.h"

#include <iostream>
#include <algorithm>

int Baekjoon_Step_03::Solution()
{
	int num[3] = {};

	std::cin >> num[0] >> num[1] >> num[2];

	int result = 0;

	// ���� 3���� ���� ��
	if (num[0] == num[1] && num[1] == num[2] && num[0] == num[2])
	{
		result = 10000 + num[0] * 1000;
	}

	// ���� 2���� ���� ���� ����� ��
	// =======================================
	else if (num[0] == num[1])
	{
		result = 1000 + num[0] * 100;
	}

	else if (num[0] == num[2])
	{
		result = 1000 + num[0] * 100;
	}

	else if (num[1] == num[2])
	{
		result = 1000 + num[1] * 100;
	}
	// =======================================

	else
	{
		result = std::max({ num[0], num[1], num[2]}) * 100;
	}

	std::cout << result;

	return 0;
}