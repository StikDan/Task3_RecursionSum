#include "pch.h"
#include "recsum.h"
#include <iostream>

using namespace std;

auto test = Operation();

TEST(CheckRecursionSum, ClassicRecursion) {
	
	int result = test.RecursionSum(0, 10);

	EXPECT_EQ(result, 55);
}

TEST(CheckRecursionSum, InversionNumbers) {

	int result = test.RecursionSum(10, 0);

	EXPECT_EQ(result, 55);
}