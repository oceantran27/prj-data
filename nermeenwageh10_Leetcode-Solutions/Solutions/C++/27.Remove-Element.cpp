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
    int removeElement(vector<int>& nums, int val) {
        int occurence = count(nums.begin(),nums.end(),val);
        remove(nums.begin(),nums.end(),val);
        return nums.size()-occurence;
        
    }
};
