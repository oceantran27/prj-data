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
using namespace std;

/*
һ飬еԪƶ k λã k ǷǸ

ʾ 1:

: [1,2,3,4,5,6,7]  k = 3
: [5,6,7,1,2,3,4]
:
ת 1 : [7,1,2,3,4,5,6]
ת 2 : [6,7,1,2,3,4,5]
ת 3 : [5,6,7,1,2,3,4]
ʾ 2:

: [-1,-100,3,99]  k = 2
: [3,99,-1,-100]
:
ת 1 : [99,-1,-100,3]
ת 2 : [3,99,-1,-100]
˵:

ĽֲͬķԽ⡣
Ҫʹÿռ临ӶΪ O(1) ԭ㷨
*/
/*
ֽⷨ
https://www.cnblogs.com/grandyang/p/4298711.html
*/
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> t = nums;
		for (int i = 0; i < nums.size(); ++i) {
			nums[(i + k) % nums.size()] = t[i];
		}
	}
};