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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end()),set2;
        for(auto it:nums2)
        {
            if(set1.count(it)>0)
                set2.insert(it);
        }
        return vector<int>(set2.begin(),set2.end());
    }
};