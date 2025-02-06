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
    int majorityElement(vector<int> &num) 
    {
        int n = num.size();  
        sort(num.begin(),num.end());  
        return num[n/2]; 
    }
};