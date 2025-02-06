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
    bool isPalindrome(string s) {
        for(int l = 0,r = s.length() - 1;l < r;l++,r--) {
            while(!isalnum(s[l]) && l < r) {l++;}
            while(!isalnum(s[r]) && r > l) {r--;}
            if(toupper(s[l]) != toupper(s[r]))  return false;
        }
        return true;
    }
};