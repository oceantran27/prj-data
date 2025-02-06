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
    int subarrayBitwiseORs(vector<int>& A) 
    {
        unordered_set<int>Set;
        unordered_set<int>All;
        for (int x: A)
        {
            unordered_set<int>temp;
            for (int y: Set)
            {
                temp.insert(y | x);
                All.insert(y | x);
            }               
            temp.insert(x);
            All.insert(x);
            Set = temp;
            
        }
        return All.size();
    }
};
