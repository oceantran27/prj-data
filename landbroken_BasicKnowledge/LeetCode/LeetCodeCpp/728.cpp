#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ret;
		for (size_t i = left; i <= right; i++)
		{
			int tmp = i;
			bool flag = true;
			while (tmp != 0)
			{
				//һλ
				int a = tmp % 10;
				//aΪ0ĸΪ0
				if (a==0 || i%a!=0)
				{
					flag = false;
					break;
				}
				tmp = tmp / 10;
			}
			if (flag)
			{
				ret.push_back(i);
			}
		}
		return ret;
	}
};