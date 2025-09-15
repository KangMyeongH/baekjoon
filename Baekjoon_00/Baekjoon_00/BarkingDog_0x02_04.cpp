#include "BarkingDog_0x02_04.h"

#include <iostream>
#include <list>
#include <string>
#include <vector>

/// ����
/// C ��� ���α׷��ֿ��� ���ڿ�(string)�� native�� �ڷ����� �ƴϴ�.
/// ���, ���ڿ��� ����, ���ڿ��� ���� ǥ���ϱ� ���� ������ NULL�� ����, ���ڵ�� �̷���� ���ڿ��� ���̴�.
/// ������ ���α׷��� ���� ���ڿ��� �ٷ�� ���� �ſ� �߿��ϱ� ������,
/// C ǥ�� ���̺귯���� ���ڿ��� �ٷ�� ���� �ſ� ������ �Լ����� �����ϰ� �ִ� :
/// �׵� �߿��� strcpy, strcmp, strtol, strtok, strlen, strcat �� �ִ�.
/// ������, �� �˷��� ���� ������, �� �������� �ʴ� �Լ��� �ϳ� �ִ� : strfry �Լ���.
/// strfry �Լ��� �Էµ� ���ڿ��� �������� ��迭�Ͽ� ���ο� ���ڿ��� ������.
/// (���� �� : ���⿡�� �Էµ� ���ڿ��� ���� ��迭�� ���ڿ��� �ٸ� �ʿ�� ����.)
///
/// �� ���� ���ڿ��� ����, 2��° ���ڿ��� 1��° ���ڿ��� strfry �Լ��� �����Ͽ� ����� �� �ִ��� �Ǵ��϶�.
///
///	�Է�
///	�Է��� ù ��° ���� �׽�Ʈ ���̽��� �� 0 < N < 1001 �̴�.
///
/// ������ �׽�Ʈ ���̽��� �ϳ��� �ٿ� ���� �ҹ��ڵ�θ� �̷���� �� ���� ���ڿ��� �� ���� �������� ���еǾ� �־�����.
/// ������ ���ڿ��� ���̴� �ִ� 1000 �̴�.
///
int BarkingDog_0x02_04::Solution()
{
	int testcase_count = 0;

	std::cin >> testcase_count;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::vector<std::string> inputData;
	inputData.reserve(testcase_count);

	for (int i = 0; i < testcase_count; ++i)
	{
		std::string inputStr;
		std::getline(std::cin, inputStr);
		inputData.push_back(inputStr);
	}

	for (auto str : inputData)
	{
		std::cout << str << std::endl;
	}

	return 0;
}
