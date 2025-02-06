#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
        int i=0, ans=0, n=s.size();
        while(i<s.size()){
            ans=26*ans-'A'+1+s[i];
            i++;
        }
        return ans;
    }
};