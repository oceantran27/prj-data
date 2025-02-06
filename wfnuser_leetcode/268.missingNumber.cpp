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
    int missingNumber(vector<int>& nums) {
        int size = nums.size();

        int sum = (size+1)*size/2;
        int act = 0;
        for (auto num: nums) {
            act += num;
        }

        return sum - act;
    }
};
