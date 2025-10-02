#include "Baekjoon_Test.h"
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

static bool oneWord(const std::string& longer, const std::string& shorter)
{
	size_t i = 0;
	size_t j = 0;
	size_t skipped = 0;

	while (i < longer.size() && j < shorter.size())
	{
		if (longer[i] == shorter[j])
		{
			++i;
			++j;
		}

		else
		{
			if (skipped++)
			{
				return false;
			}

			else
			{
				++i;
			}
		}
	}

	return true;
}

static bool sameLenOneReplace(const std::string& a, const std::string& b)
{
	// 길이가 같고 한 글자만 다를 때
	int diff = 0;

	for (size_t i = 0; i < a.size(); ++i)
	{
		if (a[i] != b[i])
		{
			++diff;
			if (diff > 1)
			{
				return false;
			}
		}
	}

	if (diff == 1)
	{
		return true;
	}

	return false;
}

static bool sameLenSwap(const std::string& a, const std::string& b)
{
	int diff = 0;
	int first = -1;
	int second = -1;

	for (int i = 0; i < static_cast<int>(a.size()); ++i)
	{
		if (a[i] != b[i])
		{
			if (diff == 0)
			{
				first = i;
			}

			else if (diff == 1)
			{
				second = i;
			}

			else
			{
				return false;
			}

			++diff;
		}
	}

	if (second != first + 1)
	{
		return false;
	}

	if (a[first] == b[second] && a[second] == b[first])
	{
		return true;
	}

	return false;
}

int Baekjoon_Test::Solution()
{
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int count = 0;
	std::cin >> count;

	std::vector<std::string> dictionary(count);
	std::unordered_set<std::string> dictionary_title;
	dictionary_title.reserve(count);
	
	for (int i = 0; i < count; ++i)
	{
		std::string string;
		std::cin >> string;
		dictionary[i] = string;
		dictionary_title.emplace(string);
	}

	int testcase_count = 0;
	std::cin >> testcase_count;

	std::vector<std::string> answers;
	answers.reserve(testcase_count);

	for (int i = 0; i < testcase_count; ++i)
	{
		std::string string;
		std::cin >> string;

		// 1. 단어가 완전히 같을 떄
		if (dictionary_title.find(string) != dictionary_title.end())
		{
			answers.emplace_back(string + " is correct");
			continue;
		}

		//=============================================================================
		size_t word_length = string.size();
		std::string found_string;
		bool is_found = false;

		for (const auto& word : dictionary)
		{
			size_t target_length = word.size();

			if (word_length == target_length)
			{
				// 3. 한 글자를 잘못 적었을 때
				if (sameLenOneReplace(word, string))
				{
					is_found = true;
					found_string = word;
					break;
				}
				// 4. 인접한 두 글자의 순서가 잘못 되었을 때
				if (sameLenSwap(word, string))
				{
					is_found = true;
					found_string = word;
					break;
				}

			}

			// 2. 한 글자를 적게 썻을 때, 한 글자를 많이 썻을 때
			else if (word_length == target_length + 1)
			{
				if (oneWord(string, word))
				{
					is_found = true;
					found_string = word;
					break;
				}
			}
			else if (word_length == target_length - 1)
			{
				if (oneWord(word, string))
				{
					is_found = true;
					found_string = word;
					break;
				}
			}
		}

		if (is_found)
		{
			answers.emplace_back(string + " is a misspelling of " + found_string);
		}

		else
		{
			// 아무것도 찾지 못했을 때
			answers.emplace_back(string + " is unknown");
		}
	}

	for (const auto& answer : answers)
	{
		std::cout << answer << '\n';
	}

	return 0;
}
