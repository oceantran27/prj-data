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
    vector<int> findErrorNums(vector<int>& nums) {
        int initialSum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        set<int> s;
        for(auto &i: nums){
            s.insert(i);
        }
        int sum = accumulate(s.begin(), s.end(), 0);
        int repeatedNum = initialSum - sum;
	    int missingNum = n * (n+1)/2 - sum;
        return {repeatedNum, missingNum};
    }
};