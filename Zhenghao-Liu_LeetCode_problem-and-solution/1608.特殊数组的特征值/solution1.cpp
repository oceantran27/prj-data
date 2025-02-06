#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//排序后二分
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=1;i<=nums.size();++i)
        {
            auto p=lower_bound(nums.begin(),nums.end(),i);
            if (p!=nums.end())
            {
                if ((nums.end()-p)==i)
                    return i;
            }
        }
        return -1;
    }
};
