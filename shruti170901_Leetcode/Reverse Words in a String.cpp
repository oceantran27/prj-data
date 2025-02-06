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
    string reverseWords(string s) {
        stringstream ssss(s);
        string res, str;
        while(ssss >> str) res = res.empty() ? str : str+' '+res;
        return res;
    }
};
