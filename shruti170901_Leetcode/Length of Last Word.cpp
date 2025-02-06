#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, n=s.size();
        if(n==0) return 0;
        i=n-1;
        while(i>=0 && s[i]==' ') i--;
        n=i+1;
        while(i>=0 && s[i]!=' ') i--;
        return n-1-i;
    }
};