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

/*
һַҵĵһظַڣ򷵻 -1

:

s = "leetcode"
 0.

s = "loveleetcode",
 2.
*/
class Solution {
public:
	int firstUniqChar(string s) {
		if (s.empty()) return -1;

		int ret = -1;
		char tmp;
		vector<int> hash(26);
		for (int i = 0;i<s.size();i++)
		{
			hash[s[i] - 'a']++;
		}
		for (auto &it : s)
		{
			if (hash[it - 'a'] == 1)
			{
				ret = s.find(it);
				break;
			}
		}

		return ret;
	}
};

int test_387(string s)
{
	Solution so;
	int ret = so.firstUniqChar(s);
	return ret;
}
