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
    vector<int> maxDepthAfterSplit(string seq) 
    {
        vector<int> res(seq.size(), 0);
        for (int i = 0; i < seq.size(); ++i)
        {
            res[i] = i & 1 ^ (seq[i] == ')');
        }
        return res;
    }
};