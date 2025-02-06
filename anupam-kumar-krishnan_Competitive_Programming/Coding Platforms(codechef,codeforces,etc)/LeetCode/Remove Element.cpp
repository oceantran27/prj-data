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
    int removeElement(vector<int>& nums, int val) {
        int i=0;
            while(i<nums.size())
            {
                if(nums[i]==val)
                    nums.erase(nums.begin()+i);
                else
                    i++;
            }
    return nums.size();
    }
};
