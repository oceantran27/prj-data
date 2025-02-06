#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto n:nums)
	        res^=n;
        return res;
    }
};
