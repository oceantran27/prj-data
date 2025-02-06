#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
һ n  numsж nums ǷԪ abc ʹ a + b + c = 0 ҳҲظԪ顣

ע⣺в԰ظԪ顣

,  nums = [-1, 0, 1, 2, -1, -4]

ҪԪ鼯Ϊ
[
	[-1, 0, 1],
	[-1, -1, 2]
]
*/
class Solution {
public:
	/**
	* @param numbers : Give an array numbers of n integer
	* @return : Find all unique triplets in the array
	*           which gives the sum of zero.
	*           each triplet in non-descending order
	*/
	vector<vector<int> > threeSum(vector<int> &A) {
		vector<vector<int> > vs;
		int target = 0;
		sort(A.begin(), A.end());    // sort A in ascending order
		for (int i = 0; i<A.size(); ++i)
		{
			if (i>0 && A[i - 1] == A[i])
				continue;       // skip duplication

			for (int j = i + 1, k = A.size() - 1; j<k;)
			{
				if (j>i + 1 && A[j - 1] == A[j])
				{
					++j;
					continue;       // skip duplication
				}
				if (k<A.size() - 1 && A[k] == A[k + 1])
				{
					--k;
					continue;       // skip duplication
				}

				int sum = A[i] + A[j] + A[k];
				if (sum > target)
					--k;
				else if (sum < target)
					++j;
				else
				{
					// find a triplet
					vector<int> v(3, A[i]);
					v[1] = A[j++];
					v[2] = A[k--];
					vs.push_back(v);
				}
			}
		}
		return vs;
	}
};