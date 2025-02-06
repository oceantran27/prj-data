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
	int subsetXORSum(vector<int>& a) {
		int t=~0u>>1; for (auto i:a)t|=i;
		return __builtin_popcount(t)<<(a.size()-1);
	}
};

