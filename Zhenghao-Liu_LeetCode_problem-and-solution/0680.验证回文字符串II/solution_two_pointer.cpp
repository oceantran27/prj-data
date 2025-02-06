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
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while (left<right)
            if (s.at(left)==s.at(right))
            {
                ++left;
                --right;
            }
            else
                break;
        if (left>=right)
            return true;
        return helper(s,left+1,right) || helper(s,left,right-1);
    }
    bool helper(string &s,int left,int right)
    {
        while (left<right)
            if (s.at(left)==s.at(right))
            {
                ++left;
                --right;
            }
            else
                return false;
        return true;
    }
};
