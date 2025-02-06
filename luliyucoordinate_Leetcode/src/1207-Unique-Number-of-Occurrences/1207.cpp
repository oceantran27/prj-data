#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int, int> m;
        unordered_set<int> s;
        for (int n : arr) ++m[n];
        for (auto& it : m) s.insert(it.second);
        return m.size() == s.size();
    }
};