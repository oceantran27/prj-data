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
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> m;
        for(int num : nums) {
            if(m.find(num) != m.end()) {
                return true;
            }
            m[num] = true;
        }
        return false;
    }
};

