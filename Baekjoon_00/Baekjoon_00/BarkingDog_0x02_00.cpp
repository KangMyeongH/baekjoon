#include "BarkingDog_0x02_00.h"
#include <iostream>
#include <vector>

/// <summary>
/// 문제
/// 알파벳 소문자로만 이루어진 단어 S가 주어진다.
/// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
///
///	입력
/// 첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
///
///	출력
/// 단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를 공백으로 구분해서 출력한다.
/// </summary>

// 65 ~ 90 알파벳 대문자
// 97 ~ 122 알파벳 소문자

int BarkingDog_0x02_00::Solution()
{
	constexpr char alphabet_small_a = 'a';
	constexpr char alphabet_small_z = 'z';

	std::vector<unsigned int> count;
	count.resize(alphabet_small_z - alphabet_small_a + 1);

	std::string s{};
	std::cin >> s;

	if (s.size() > 100)
	{
		return -1;
	}

	const char* c = s.data();

	for (size_t i = 0; i < s.size(); ++i)
	{
		const char alphabet = c[i];

		if (alphabet < alphabet_small_a || alphabet > alphabet_small_z)
		{
			return -1;
		}
			
		for (char j = alphabet_small_a; j <= alphabet_small_z; ++j)
		{
			if (alphabet == j)
			{
				count[j - alphabet_small_a]++;
				break;
			}
		}
	}

	for (const unsigned int index : count)
	{
		std::cout << index << ' ';
	}

	return 0;
}
