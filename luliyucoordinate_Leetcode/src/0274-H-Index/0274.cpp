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
    int hIndex(vector<int>& citations) 
    {
        int n = citations.size();
        vector<int> cnt(n + 1, 0);
        for (int c : citations) cnt[min(c, n)]++;
        
        int i = n;
        for (int total = cnt[n]; i > total; total += cnt[i]) --i;
        return i;
    }
};