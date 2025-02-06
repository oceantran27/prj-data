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

class Solution {
public:
	int binaryGap(int N) {
		int maxGap = 0;
		int pre = -1;//ǰһ1λ
		int cur = 0;//ǰѭ
		int next = 0;
		while (N != 0)
		{
			//ǰλ1ҺԵһ1
			if (N & 1)
			{
				if (pre != -1) maxGap = maxGap>cur - pre ? maxGap : cur - pre;
				pre = cur;
			}
			N = N >> 1;
			cur++;
		}
		return maxGap;
	}
};