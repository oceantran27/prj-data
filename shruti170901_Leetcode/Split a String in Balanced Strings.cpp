#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0, temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') temp++;
            else temp--;
            if(temp==0) cnt++;
        }
        return cnt;
    }
};