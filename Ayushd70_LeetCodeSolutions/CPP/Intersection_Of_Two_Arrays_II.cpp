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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        vector <int> m;
        for(auto val : nums1){
            auto it = find(nums2.begin(),nums2.end(),val);
            if(it!=nums2.end())
            {
                m.push_back(*it);
                nums2.erase(it);
            }
        }
        return m;
    }
    
};
