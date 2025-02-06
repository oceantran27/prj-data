#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include"stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

/*
¥ݡҪ n ܵ¥

ÿ 1  2 ̨סжֲͬķ¥أ

ע⣺ n һ

ʾ 1

룺 2
 2
ͣ ַ¥
1.  1  + 1 
2.  2 
ʾ 2

룺 3
 3
ͣ ַ¥
1.  1  + 1  + 1 
2.  1  + 2 
3.  2  + 1 
*/
class Solution {
public:
	int climbStairs(int n)
	{
		if (n == 0 || n == 1 || n == 2)
		{
			return n;
		}

		vector<int> r(n + 1, 0);
		r[1] = 1;
		r[2] = 2;

		for (int i = 3; i <= n; i++)
		{
			r[i] = r[i - 1] + r[i - 2];
		}
		return r[n];
	}
};