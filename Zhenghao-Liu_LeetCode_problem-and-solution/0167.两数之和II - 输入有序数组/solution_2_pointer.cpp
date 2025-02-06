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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        while (numbers.at(left)+numbers.at(right)!=target)
            if (numbers.at(left)+numbers.at(right)>target)
                --right;
            else
                ++left;
        return {left+1,right+1};
    }
};
