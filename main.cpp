#include "Recursion.h"
#include <iostream>

using namespace std;

int main()
{
	auto operation = Operation();
	int res = operation.RecursionSum(1,5);
	cout << res;
}