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
    int missingNumber(vector<int>& arr) 
    {
        return (arr[0] + arr[arr.size()-1])*(arr.size() + 1)/2 - 
            accumulate(arr.begin(), arr.end(), 0);
    }
};