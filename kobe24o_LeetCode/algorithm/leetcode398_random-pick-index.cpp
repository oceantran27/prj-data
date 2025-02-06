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
	vector<int> arr;
	int i, idx, count;
	bool Occur;
public:
    Solution(vector<int>& nums) {
        arr = nums;
    }
    
    int pick(int target) {
    	Occur = false;
    	count = 0;
        for(i = 0; i < arr.size(); ++i)
        {
        	if(arr[i] == target)
        	{
        		if(!Occur)
        		{
        			idx = i;
        			Occur = true;
        			count = 1;
        		}
        		else
        		{
        			count++;
        			if(rand()%count == 0)//有1/count 的概率等于0
        				idx = i;
        		}
        	}
        }
        return idx;
    }
};