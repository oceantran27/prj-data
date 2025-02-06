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
    int fillCups(vector<int>& amount) 
    {
        sort(amount.rbegin(), amount.rend());
        int total = accumulate(amount.begin(), amount.end(), 0);
        if (amount[0]>=total/2+1)
            return amount[0];
        else
            return (total+1)/2;
        
    }
};
