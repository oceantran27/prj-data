#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://discuss.leetcode.com/topic/63903/short-easy-c-using-set
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (int n : nums) {
            s.insert(n);
            if (s.size() > 3) s.erase(s.begin());
        }
        return s.size() == 3 ? *s.begin() : *s.rbegin();
    }
};