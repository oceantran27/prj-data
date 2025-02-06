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
    int singleNumber(vector<int>& nums) {
          
      	int B[100000];
	for(int i=0;i<100000;i++)
	B[i]=0;
	for(int i=0;i<nums.size();i++)
	{
		B[nums[i]+30000]++;
	}
	int r;
	for(int i=0;i<=100000;i++)
	{
		if(B[i]==1)
		{
			r=i-30000;
			break;
		}
	}
	return r;
    }
};
