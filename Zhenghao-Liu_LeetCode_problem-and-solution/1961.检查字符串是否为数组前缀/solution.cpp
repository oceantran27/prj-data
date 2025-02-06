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
    bool isPrefixString(string s, vector<string>& words) {
        string a;
        int sz=s.size();
        for (string &i:words) {
            a+=i;
            int cur=a.size();
            if (cur>sz) {
                return false;
            } else if (cur==sz) {
                return a==s;
            }
        }
        return false;
    }
};