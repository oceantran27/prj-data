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
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        return max(left.size()==0?0:left.back(), right.size()==0?0:n-right[0]);        
    }
};
