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
    bool p(string s)
    {
        string t = s;
        reverse(t.begin(),t.end());
        return t==s;
    }
    int removePalindromeSub(string s) {
        int n = s.size();
        if(p(s)) return 1;
        else return 2;
    }
};