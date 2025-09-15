#include "BaekjoonTest.h"

#include <iostream>
#include <string>


/// ù° �ٿ��� �ֹ��� ������ ���� �� n�� ���� ������ �� ����ü�� �� m�� �־�����. (1 �� m �� n �� 101000, m�� n�� 10���� ����)
/// ù° �ٿ� ����ü �ϳ����� ���ư��� ���� ���� ����Ѵ�. �׸��� �� ��° �ٿ��� 1���� �й��� �� ���� ���� ���� ����Ѵ�.

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

	// �������� ����ü�� ������ ���� �� ���� ����.
	// �� remainder�� m���� ũ�� ��� while�� �۵�
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

// num1�� num2���� ū�� Ȯ���ϴ� �Լ�
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
