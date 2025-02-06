#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int findMin(vector<int>& nums)
{
    int minm=nums[0];//最小值初始化为第一个元素
    int len=nums.size();
    for(int i=1;i<len;i++)//对数组扫一遍
    {
        minm=min(minm,nums[i]);
    }
    return minm;
}
