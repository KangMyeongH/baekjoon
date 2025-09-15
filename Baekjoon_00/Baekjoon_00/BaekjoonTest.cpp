#include "BaekjoonTest.h"

#include <iostream>
#include <string>


/// 첫째 줄에는 최백준 조교가 가진 돈 n과 돈을 받으러 온 생명체의 수 m이 주어진다. (1 ≤ m ≤ n ≤ 101000, m과 n은 10진수 정수)
/// 첫째 줄에 생명체 하나에게 돌아가는 돈의 양을 출력한다. 그리고 두 번째 줄에는 1원씩 분배할 수 없는 남는 돈을 출력한다.

int BaekjoonTest::Solution()
{
	constexpr char zero = '0';
	constexpr char nine = '9';

	std::string inputStr;
	std::getline(std::cin, inputStr);

	size_t pos = inputStr.find(' ');
	std::string n = inputStr.substr(0, pos);
	std::string m = inputStr.substr(pos + 1);

	std::string remainder = n;
	int quotient = 0;

	// 가진돈이 생명체의 수보다 작을 때 까지 진행.
	// 즉 remainder가 m보다 크면 계속 while문 작동
	while (!GreaterThan(m, remainder))
	{
		remainder = Subtract(remainder, m);
		++quotient;
	}

	std::cout << quotient << '\n';
	std::cout << remainder;

	return 0;
}

std::string BaekjoonTest::Subtract(const std::string& num1, const std::string& num2)
{
	std::string result;
	int carry = 0;
	int i = static_cast<int>(num1.size()) -1;
	int j = static_cast<int>(num2.size()) -1;

	while (i >= 0)
	{
		int a = num1[i] - '0';
		int b = 0;

		if (j >= 0)
		{
			b = num2[j] - '0';
		}

		int sub = a - b - carry;

		if (sub < 0)
		{
			sub += 10;
			carry = 1;
		}

		else
		{
			carry = 0;
		}

		result.insert(result.begin(), sub + '0');
		--i;
		--j;
	}

	result.erase(0, result.find_first_not_of('0'));

	return result.empty() ? "0" : result;
}

// num1이 num2보다 큰지 확인하는 함수
bool BaekjoonTest::GreaterThan(const std::string& num1, const std::string& num2)
{
	int size1 = static_cast<int>(num1.size()) -1;
	int size2 = static_cast<int>(num2.size()) -1;

	if (size1 < size2)
	{
		return false;
	}

	if (size1 > size2)
	{
		return true;
	}

	while (size1 >= 0)
	{
		if (num1[size1] > num2[size2])
			return true;

		if (num1[size1] < num2[size2])
			return false;

		--size1;
		--size2;
	}

	return false;
}
