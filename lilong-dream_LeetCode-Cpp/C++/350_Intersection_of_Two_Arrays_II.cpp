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
        map<int, int> m;
        vector<int> res;
        for(int num : nums1) {
            if(m.find(num) == m.end()) {
                m[num] = 1;
            } else {
                m[num]++;
            }
        }
        for(int num : nums2) {
            if(m.find(num) != m.end() && m[num] > 0) {
                res.push_back(num);
                m[num]--;
            }
        }
        return res;
    }
};

