#pragma once
#include <string>

#include "BaekjoonBase.h"
class BaekjoonTest : public BaekjoonBase
{
public:
	BaekjoonTest() = default;
	~BaekjoonTest() override = default;

	int Solution() override;

	std::string Subtract(const std::string& num1, const std::string& num2);
	//std::string Divide(const std::string& num1, const std::string& num2);

	bool GreaterThan(const std::string& num1, const std::string& num2);
};

