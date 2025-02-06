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
    int findMagicIndex(vector<int>& nums) {
        int nums_size=nums.size();
        for (int i=0;i<nums_size;++i)
            if (nums.at(i)==i)
                return i;
        return -1;
    }
};
