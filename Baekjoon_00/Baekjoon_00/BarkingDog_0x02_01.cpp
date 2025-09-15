#include "BarkingDog_0x02_01.h"

#include <iostream>
#include <string>
#include <vector>

/// <summary>
/// ����
/// �� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// �Է�
/// ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����.
/// ��° �ٿ��� ������ �������� ���еǾ����ִ�.
/// ��° �ٿ��� ã������ �ϴ� ���� v�� �־�����.
/// �Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.
///
///	���
/// ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.
/// </summary>

int BarkingDog_0x02_01::Solution()
{
	unsigned int num = 0;
	std::cin >> num;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string inputStr;
	std::getline(std::cin, inputStr);

	std::vector<std::string> digits;
	digits.resize(num);

	for (unsigned int i = 0; i < num; ++i)
	{
		size_t pos = inputStr.find(' ');
		digits[i] = inputStr.substr(0, pos);
		inputStr = inputStr.substr(pos + 1);
	}

	std::string targetDigit;
	std::cin >> targetDigit;

	unsigned int count = 0;
	for (const std::string& digit : digits)
	{
		if (digit == targetDigit)
		{
			++count;
		}
	}

	std::cout << count;

	return 0;
}
