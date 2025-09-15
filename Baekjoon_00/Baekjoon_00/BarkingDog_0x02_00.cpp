#include "BarkingDog_0x02_00.h"
#include <iostream>
#include <vector>

/// <summary>
/// ����
/// ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.
/// �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
///	�Է�
/// ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
///
///	���
/// �ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, z�� ������ �������� �����ؼ� ����Ѵ�.
/// </summary>

// 65 ~ 90 ���ĺ� �빮��
// 97 ~ 122 ���ĺ� �ҹ���

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
