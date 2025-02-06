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
https://leetcode-cn.com/problems/merge-sorted-array/description/
 nums1  nums2 nums2 ϲ nums1 Уʹ num1 Ϊһ顣

˵:

ʼ nums1  nums2 ԪֱΪ m  n
Լ nums1 㹻Ŀռ䣨ռСڻ m + n nums2 еԪء
ʾ:

:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

: [1,2,2,3,5,6]
*/
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int size = m + n;
		m--;
		n--;
		for (int i = size - 1;i >= 0;i--)
		{
			if (m<0)
			{
				nums1[i] = nums2[n];
				n--;
			}
			else if (n<0)
			{
				nums1[i] = nums1[m];
				m--;
			}
			else if (nums1[m]>nums2[n])
			{
				nums1[i] = nums1[m];
				m--;
			}
			else
			{
				nums1[i] = nums2[n];
				n--;
			}
		}
	}
};
