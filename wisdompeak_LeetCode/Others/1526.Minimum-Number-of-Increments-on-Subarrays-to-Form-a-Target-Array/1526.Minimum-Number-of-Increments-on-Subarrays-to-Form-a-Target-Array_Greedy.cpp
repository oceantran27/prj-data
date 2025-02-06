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
    int minNumberOperations(vector<int>& target) 
    {
        int ret = 0, curHeight = 0;
        for (int i=0; i<target.size(); i++)
        {
            ret += max(0, target[i] - curHeight);
            curHeight = target[i];
        }
        return ret;
    }
};
