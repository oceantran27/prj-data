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
    bool uniqueOccurrences(vector<int> &arr) {
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        set<int> s;
        for (auto it: mp) {
            s.insert(it.second);
        }
        return s.size() == mp.size();
    }
};