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
    int countElements(vector<int>& arr) {
        unordered_set<int> table(arr.begin(), arr.end());
        int count = 0;
        for (int num : arr) {
            if (table.count(num + 1)) {
                ++count;
            }
        }
        
        return count;
    }
};
