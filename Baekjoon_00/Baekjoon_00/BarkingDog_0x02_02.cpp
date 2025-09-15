#include "BarkingDog_0x02_02.h"

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <limits>

/// <summary>
/// ����
///	�� �ٷ� �� ������ �����͸� �����Ϸ��� �Ѵ�. �� ������� ���� �ҹ��ڸ��� ����� �� �ִ� �������, �ִ� 600,000���ڱ��� �Է��� �� �ִ�.
///	�� �����⿡�� 'Ŀ��'��� ���� �ִµ�, Ŀ���� ������ �� ��(ù ��° ������ ����), ������ �� ��(������ ������ ������),
///	�Ǵ� ���� �߰� ������ ��(��� ���ӵ� �� ���� ����)�� ��ġ�� �� �ִ�.�� ���̰� L�� ���ڿ��� ���� �����⿡ �ԷµǾ� ������,
///	Ŀ���� ��ġ�� �� �ִ� ���� L + 1���� ��찡 �ִ�.
///
///	�ʱ⿡ �����⿡ �ԷµǾ� �ִ� ���ڿ��� �־�����, �� ���� �Է��� ��ɾ ���ʷ� �־����� ��,
///	��� ��ɾ �����ϰ� �� �� �����⿡ �ԷµǾ� �ִ� ���ڿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
///	��, ��ɾ ����Ǳ� ���� Ŀ���� ������ �� �ڿ� ��ġ�ϰ� �ִٰ� �Ѵ�.
///
///	�Է�
///	ù° �ٿ��� �ʱ⿡ �����⿡ �ԷµǾ� �ִ� ���ڿ��� �־�����. �� ���ڿ��� ���̰� N�̰�,
///	���� �ҹ��ڷθ� �̷���� ������, ���̴� 100,000�� ���� �ʴ´�.
///	��° �ٿ��� �Է��� ��ɾ��� ������ ��Ÿ���� ���� M(1 �� M �� 500,000)�� �־�����.
///	��° �ٺ��� M���� �ٿ� ���� �Է��� ��ɾ ������� �־�����.
///	��ɾ�� �Ʒ��� �� ���� �� �ϳ��� ���·θ� �־�����.
///
///	���
///	ù° �ٿ� ��� ��ɾ �����ϰ� �� �� �����⿡ �ԷµǾ� �ִ� ���ڿ��� ����Ѵ�.
///
///	��ɾ�
///	L : Ŀ���� �������� �� ĭ �ű� (Ŀ���� ������ �� ���̸� ���õ�)
///	D : Ŀ���� ���������� �� ĭ �ű� (Ŀ���� ������ �� ���̸� ���õ�)
///	B : Ŀ�� ���ʿ� �ִ� ���ڸ� ������ (Ŀ���� ������ �� ���̸� ���õ�)
///		������ ���� Ŀ���� �� ĭ �������� �̵��� ��ó�� ��Ÿ������, ������ Ŀ���� �����ʿ� �ִ� ���ڴ� �״����
///	P $ : $��� ���ڸ� ���ʿ� �߰���
/// </summary>

int BarkingDog_0x02_02::Solution()
{
	std::string inputStr;
	
	std::cin >> inputStr;
	std::list strData(inputStr.begin(), inputStr.end());

	auto cursor = strData.end();

	unsigned int commandCount = 0;
	std::cin >> commandCount;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::vector<std::string> commands;
	commands.resize(commandCount);

	for (unsigned int i = 0; i < commandCount; ++i)
	{
		std::getline(std::cin, commands[i]);
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	
	for (const std::string& command : commands)
	{
		auto data = command[0];
		// iter.begin == 0, ���ڿ��� ���� �տ��� ����
		// iter.end == 

		if (data == 'L')
		{
			// Ŀ���� �������� �� ĭ �ű�(Ŀ���� ������ �� ���̸� ���õ�)
			if (cursor != strData.begin())
			{
				--cursor;
			}
		}

		else if (data == 'D')
		{
			// Ŀ���� ���������� �� ĭ �ű� (Ŀ���� ������ �� ���̸� ���õ�)
			if (cursor != strData.end())
			{
				++cursor;
			}
		}

		else if (data == 'B')
		{

			if (cursor != strData.begin())
			{
				cursor = strData.erase(--cursor);
			}
		}

		else if (data == 'P')
		{
			//size_t pos = command.find(' ');
			std::string addStr = command.substr(2);
			cursor = strData.insert(cursor, addStr.begin(), addStr.end());
			++cursor;
		}
	}

	for (auto str : strData)
	{
		std::cout << str;
	}

	return 0;
}
