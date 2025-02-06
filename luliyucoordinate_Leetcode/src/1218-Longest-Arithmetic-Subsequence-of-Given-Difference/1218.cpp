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
    int longestSubsequence(vector<int>& arr, int dif) 
    {
        unordered_map<int, int> mem;
        int res = 1;
        for (int i : arr)
        {
            if (mem.count(i - dif)) mem[i] = mem[i - dif] + 1;
            else mem[i] = 1;
            res = max(res, mem[i]);
        }
        return res;
    }
};