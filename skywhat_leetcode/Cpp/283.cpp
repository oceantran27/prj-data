#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	void moveZeroes(vector<int>& nums){
		//i seek for zero, j seek for non-zero
		for(int i=0,j=0;i<nums.size()&&j<nums.size();){
			while(i<nums.size()&&nums[i]!=0)
				i++;
			while(j<nums.size()&&nums[j]==0)
				j++;
			if(i>=nums.size()||j>=nums.size())
				break;
			if(i<j)
				swap(nums[i++],nums[j++]);
			else
				j=i+1;
		}		
	}
};

class Solution2{
public:
	void moveZeroes(vector<int>& nums){
		int j=0;
		for(int i=0;i<nums.size();++i){
			if(nums[i]!=0)
				nums[j++]=nums[i];
		}
		for(;j<nums.size();++j){
			nums[j]=0;
		}
	}
};

class Solution3 {
public:
    void moveZeroes(vector<int>& nums) {
        int begin = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0){
                swap(nums[i],nums[begin++]);
            }
        }
    }
};

/*
0,1,0,3,12

1,0,0,3,12
1,3,0,0,12
1,3,12,0,0

*/

int main(){
	vector<int> test={0,1,0,3,12};
	Solution s;
	s.moveZeroes(test);
	for(auto t:test)
		cout<<t<<", ";
	
	return 0;
}
