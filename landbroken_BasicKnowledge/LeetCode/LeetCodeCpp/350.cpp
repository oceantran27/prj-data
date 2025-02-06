#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include "LeetCodeCppTest.h"
using namespace std;

/*
飬дһǵĽ

ʾ 1:

: nums1 = [1,2,2,1], nums2 = [2,2]
: [2,2]
ʾ 2:

: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
: [4,9]
˵

ÿԪسֵĴӦԪгֵĴһ¡
ǿԲ˳
:

Ѿźأ㽫Ż㷨
 nums1 ĴС nums2 Сַܶ࣬ţ
 nums2 Ԫش洢ڴϣڴ޵ģ㲻һμеԪصڴУô죿
*/
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());

		int i = 0, j = 0;
		while (i<nums1.size() && j<nums2.size())
		{
			if (nums1[i] == nums2[j])
			{
				ret.push_back(nums1[i]);
				i++;
				j++;
			}
			else
			{
				if (nums1[i]<nums2[j])
				{
					i++;
				}
				else
				{
					j++;
				}
			}
		}
		return ret;
	}
};