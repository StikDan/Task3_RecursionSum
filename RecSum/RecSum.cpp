// RecSum.cpp : Определяет функции для статической библиотеки.

#include "pch.h"
#include "recsum.h"
#include <iostream>

int Operation::RecursionSum(int a, int b)
{
	if (a > b)
	{
		std::swap(a, b);
	}

	if (b == 0) return 0;
	return b + RecursionSum(a, b - 1);
}
