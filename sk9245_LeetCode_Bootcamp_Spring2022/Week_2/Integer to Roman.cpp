#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums = {1000,900,500,400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string result = "";
        int i = 0;
        while(num>0)
        {
           if(num>=nums[i])
           {
               result += romans[i];
               num  = num - nums[i];
               i = -1;
           }
            i++;
        }
        return result;
    }
};
