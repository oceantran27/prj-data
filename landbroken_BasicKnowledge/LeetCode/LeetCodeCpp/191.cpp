#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include <vector>
using namespace std;

/*
λ1ĸ
дһһ޷ƱʽλΪ 1 ĸҲΪ

ʾ :

: 11
: 3
:  11 ĶƱʾΪ 00000000000000000000000000001011


ʾ 2:

: 128
: 1
:  128 ĶƱʾΪ 00000000000000000000000010000000
*/
class Solution {
public:
	int hammingWeight(uint32_t n) {
		int sum = 0;
		while (n != 0)
		{
			if (n & 1)sum++;
			n = n >> 1;
		}
		return sum;
	}
};