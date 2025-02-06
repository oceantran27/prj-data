#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"
#include "BitOperation.h"

BitOperation::BitOperation()
{
}


BitOperation::~BitOperation()
{
}

bool BitOperation::IsEven(int a)
{
	//==ȼ&
	return (a & 1) == 0;
}

int BitOperation::Multiply2(int a)
{
	return a << 1;
}

int BitOperation::Divide2(int a)
{
	return a >> 1;
}

int BitOperation::SingleNumber(int A[], int n)
{
	for (int i = 1; i < n; ++i) {
		A[0] ^= A[i];
	}
	return A[0];
}

void BitOperation::Swap(int & x, int & y)
{
	x ^= y;
	y ^= x;
	x ^= y;
}
