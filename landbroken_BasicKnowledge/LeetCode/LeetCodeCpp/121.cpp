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
һ飬ĵ i Ԫһ֧Ʊ i ļ۸

ֻһʽףһ֧Ʊһ㷨ܻȡ

ע㲻ƱǰƱ

ʾ 1:

: [7,1,5,3,6,4]
: 5
: ڵ 2 죨Ʊ۸ = 1ʱ룬ڵ 5 죨Ʊ۸ = 6ʱ = 6-1 = 5 
ע 7-1 = 6, Ϊ۸Ҫ۸
ʾ 2:

: [7,6,4,3,1]
: 0
: , ûн, Ϊ 0
*/
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int size = prices.size();
		if (size<2) return 0;

		//С۸
		int minPrice = prices[0];
		int ret = 0;
		for (int i = 1;i<size;i++)
		{
			if (prices[i]<minPrice)
			{
				minPrice = prices[i];
			}
			else
			{
				if (prices[i] - minPrice>ret)
				{
					ret = prices[i] - minPrice;
				}
			}
		}
		return ret;
	}
};