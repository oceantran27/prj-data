#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 显然小于两个元素一定能够满足
* 设遇到[i-1 i]，倘若[i-1]>[i]时说明需要进行改变一个数字
* 要满足小于等于，要么改左边（大的[i-1]往小了改）要么改右边（小的[i]往大了改）
  1. [i-1]改成[i]，eg：[2,1]改成[1,1]
  2. [i]改成[i-1]，eg：[2,1]改成[2,2]
* 但是单看两个元素的话是分辨不出是改左还是改右的
* 因此还要引入[i-2]即考虑区间变成[i-2 i-1 i]
  为什么不是引入[i+1]呢，因为我们是从左往右遍历的，可以保证[i-2]<=[i-1]，但是保证不了[i]与[i+1]的关系
* 注意边界即[i-2]不存在时候，即i==1或i==0时候
** 这时候因为不确定[i+1]与[i]之间的关系，所以只能改左边（nums[i-1]=nums[i]）
  eg：[2,1,1]此时i=1即[i]=[1]=0，i-1=0即[i-1]=[0]=2，那么[0]=2必须变成1,[1]=1如果变成2的话就错误了
  可以理解成在只有两个数时，尽可能的使上界小一点，这样后面满足<=的可能性大一点
* 现在考虑[i-2]与[i]的关系，因为是从左往右遍历，所以已经确定了[i-2]<=[i]
** 1. 倘若[i-2]<[i]，那么必须改左边（nums[i-1]=nums[i]）
  和[i-2]时候不存在的思想类似，一个范围内的上界越低，能满足<=的可能性越大
** 2. 倘若[i-2]=[i]，同样必须改左边（nums[i-1]=nums[i]）
  和上述思想一样，尽可能让上界变得小
** 3. 倘若[i-2]>[i]，此时必须改右边（nums[i]=nums[i-1]）
  因为[i-2]<=[i-1]，那么说明[i]是[i-2 i-1 i]中最小的元素，所以只能将它往大了变
** 如果上述修改次数超过两次，则说明false
*/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int nums_size=nums.size();
        if (nums_size<=2)
            return true;
        int mistake=0;
        for (int i=1;i<nums_size;++i)
            if (nums.at(i-1)>nums.at(i))
            {
                ++mistake;
                if (mistake>=2)
                    return false;
                if (i-2>=0 && nums.at(i-2)>nums.at(i))
                    nums.at(i)=nums.at(i-1);
                else
                    nums.at(i-1)=nums.at(i);
            }
        return true;
    }
};
