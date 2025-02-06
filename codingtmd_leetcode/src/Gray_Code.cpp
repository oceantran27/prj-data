#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> grayCode(int n) {
		vector<int> result;
		result.push_back(0);
		for (int i = 0; i < n; i++)
		{
			int highestBit = 1 << i;
			int len = result.size();
			for (int i = len - 1; i >= 0; i--)
			{
				result.push_back(highestBit + result[i]);
			}
		}
		return result;
	}
};