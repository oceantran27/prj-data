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
    bool checkIfExist(vector<int>& arr) 
    {
        unordered_set<int> seen;
        for (int i : arr)
        {
            if (seen.count(2*i) || (i % 2 == 0 && seen.count(i / 2))) return true;
            seen.insert(i);
        }
        return false;
    }
};