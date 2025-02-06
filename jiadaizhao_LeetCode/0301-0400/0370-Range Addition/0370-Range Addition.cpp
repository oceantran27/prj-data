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
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> result(length);
        for (auto& update : updates) {
            result[update[0]] += update[2];
            if (update[1]  + 1 < length) {
                result[update[1] + 1] -= update[2];
            }
        }
        
        for (int i = 1; i < length; ++i) {
            result[i] += result[i - 1];
        }
        
        return result;
    }
};
