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
    int singleNumber(vector<int>& nums) {
        int ones=0;
        int twos=0;
        int threes=0;

        for (auto num:nums) {
            twos |= ones & num;
            ones = ones ^ num;
            threes = ones & twos;
            ones = ~threes & ones;
            twos = ~threes & twos;
        }

        return ones;
    }
};