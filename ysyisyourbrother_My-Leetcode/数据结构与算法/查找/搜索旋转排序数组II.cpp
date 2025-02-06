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
	if(nums.size()==0) return false;
    int left=0,
        right=nums.size()-1,
        mid;
    while(left<right)
    {
    	if(nums[left]<nums[right]) //如果是没有旋转的有序数组 
		{
			vector<int>::iterator it = lower_bound(nums.begin()+left,nums.begin()+right+1,target);
    		if((*it)==target) return true;
    		else return false;
		}
    	else//有旋转的情况 
    	{
    		mid=(left+right)/2;
    		if(nums[mid]>nums[left])//mid在左侧有序数列，中间元素等于的情况也属于,因为一定是有旋转的情况
			{
				if(nums[mid]==target) return true;//中间元素等于目标
				else if (nums[mid]<target)//中间元素小于目标，则只有可能在右侧 
				{
					left=mid+1;
					continue;
				}
				else if(nums[mid]>target)//中间元素大于目标 ，再进行分类 
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
			else if(nums[mid]<nums[left])//中间元素在右侧有序数列 
			{
			 	if(nums[mid]==target) return true;
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
            else//当中间等于左边的时候，无法判断左侧还是右侧，只能将left加一
            {
                if(nums[mid]==target) return true;
                left++;
            }
		}
	}
	if(nums[left]==target) return true;
	else return false;
}
int main()
{
	vector<int> x;
	x.push_back(1);
	// x.push_back(1);
	x.push_back(3);
	x.push_back(1);
	x.push_back(1);
	x.push_back(1);
	x.push_back(1);
	cout<<search(x,3);
 } 
