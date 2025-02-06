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
һûظԪص顣

ʾ:

// ּ 1, 2  3 ʼ顣
int[] nums = {1,2,3};
Solution solution = new Solution(nums);

//  [1,2,3] ؽκ [1,2,3]зصĸӦͬ
solution.shuffle();

// 鵽ĳʼ״̬[1,2,3]
solution.reset();

// [1,2,3]ҺĽ
solution.shuffle();
*/
class Solution {
private:
	vector<int> _vec;
public:
	Solution(vector<int> nums) {
		_vec.clear();
		_vec.assign(nums.begin(), nums.end());
	}

	/** Resets the array to its original configuration and return it. */
	vector<int> reset() {
		return _vec;
	}

	/** Returns a random shuffling of the array. */
	vector<int> shuffle() {
		vector<int> res = _vec;
		for (int i = 0; i < res.size(); ++i)
		{
			//ο
			//https://yjk94.wordpress.com/2017/03/17/%E6%B4%97%E7%89%8C%E7%9A%84%E6%AD%A3%E7%A1%AE%E5%A7%BF%E5%8A%BF-knuth-shuffle%E7%AE%97%E6%B3%95/
			//עϴKnuth shuffle㷨
			int t = i + rand() % (res.size() - i);
			swap(res[i], res[t]);
		}
		return res;
	}
};

/**
* Your Solution object will be instantiated and called as such:
* Solution obj = new Solution(nums);
* vector<int> param_1 = obj.reset();
* vector<int> param_2 = obj.shuffle();
*/
