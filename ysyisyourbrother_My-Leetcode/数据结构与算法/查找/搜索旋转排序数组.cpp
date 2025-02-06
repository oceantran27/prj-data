#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) 
{
	if(nums.size()==0) return -1;
    int left=0,
        right=nums.size()-1,
        mid;
    while(left<right)
    {
    	if(nums[left]<nums[right]) //????????????????????? 
		{
			vector<int>::iterator it = lower_bound(nums.begin()+left,nums.begin()+right+1,target);
    		if((*it)==target) return it-nums.begin();
    		else return -1;
		}
    	else//?????????? 
    	{
    		mid=(left+right)/2;
    		if(nums[mid]>=nums[left])//mid??????????????????????????????,??????????????????
			{
				if(nums[mid]==target) return mid;//???????????
				else if (nums[mid]<target)//?????????????????????? 
				{
					left=mid+1;
					continue;
				}
				else if(nums[mid]>target)//??????????? ????????? 
				{
					if(nums[left]<=target)
					{
						right=mid-1;
						continue;
					}
					else
					{
						left=mid+1;
						continue;	
					}
				}
			}
			else if(nums[mid]<nums[left])//?????????????????? 
			{
			 	if(nums[mid]==target) return mid;
				else if(nums[mid]>target)
				{
					right=mid-1;
					continue;
				} 
				else if(nums[mid]<target)
				{
					if(nums[right]>=target) 
					{
						left=mid+1;
						continue;
					}
					else
					{
						right=mid-1;
						continue;
					}
				}
			} 
		}
	}
	if(nums[left]==target) return left;
	else return -1;
}
int main()
{
	vector<int> x;
	x.push_back(4);
	x.push_back(5);
	x.push_back(6);
	x.push_back(7);
	x.push_back(0);
	x.push_back(1);
	x.push_back(2);
	cout<<search(x,0);
 } 
