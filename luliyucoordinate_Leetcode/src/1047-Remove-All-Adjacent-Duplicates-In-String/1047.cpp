#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    string removeDuplicates(string S) 
    {
        string res = "";
        for (char& c : S)
        {
            if (!res.empty() && c == res.back()) res.pop_back();
            else res.push_back(c);
        }
        return res;
    }
};