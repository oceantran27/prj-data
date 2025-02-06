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
   void moveZeroes(vector<int>& nums)
{
	for(int i=0,next=0;i<nums.size();++i)
		if(nums[i])
			swap(nums[i],nums[next++]);
}
};
