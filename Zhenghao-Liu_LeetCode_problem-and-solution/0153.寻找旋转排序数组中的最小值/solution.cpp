#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//找最小值即下降的那一个值
class Solution {
public:
    int findMin(vector<int>& nums) {
        int nums_size=nums.size();
        for (int i=1;i<nums_size;++i)
            if (nums.at(i)<nums.at(i-1))
                return nums.at(i);
        return nums.at(0);
    }
};
