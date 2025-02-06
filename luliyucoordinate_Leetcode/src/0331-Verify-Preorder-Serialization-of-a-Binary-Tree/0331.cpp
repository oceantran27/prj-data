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
    bool isValidSerialization(string preorder) 
    {
        if (preorder.empty()) return false;
        preorder += ',';
        int sz = preorder.size();
        int capacity = 1;
        for (int idx = 0; idx < sz; idx++)
        {
            if (preorder[idx] != ',') continue;
            capacity--;
            if (capacity < 0) return false;
            if (preorder[idx-1] != '#') capacity += 2;
        }
        return capacity == 0;
    }
};