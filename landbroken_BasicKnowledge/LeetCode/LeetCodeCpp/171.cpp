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
#include "LeetCodeCppTest.h"
using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		int len = s.size();
		int ret = 0;
		//26[1,26]ת10
		for (size_t i = 0; i < len; i++)
		{
			ret += (s[i] - 'A' + 1)*pow(26, len - i -1);
		}
		return ret;
	}
};