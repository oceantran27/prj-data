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
        unordered_map<int, int> cnt;
        unordered_set<int>      unq;
        for (int n   : arr) cnt[n]++;               // [1] count frequencies
        for (auto& c : cnt) unq.insert(c.second);   // [2] collect unique frequencies
        return cnt.size() == unq.size();
    }
};