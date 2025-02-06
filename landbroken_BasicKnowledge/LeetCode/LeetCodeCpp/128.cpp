#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
using namespace std;

/*
һδ飬ҳеĳȡ

Ҫ㷨ʱ临ӶΪ O(n)

ʾ:

: [100, 4, 200, 1, 3, 2]
: 4
:  [1, 2, 3, 4]ĳΪ 4
*/
class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		//ڲǹϣʵ֣O(1)O(n)
		unordered_set<int> uset;
		for (int num : nums)
			uset.insert(num);

		//O(n)
		int longest = 0;
		for (int num : uset)
		{
			//ѾһеСֵ
			if (uset.find(num - 1) == uset.end())
			{
				int cnt = 1;
				//ѭҵĴ
				while (uset.find(num + 1) != uset.end())
				{
					num++;
					cnt++;
				}
				longest = max(longest, cnt);
			}
		}
		return longest;
	}
};