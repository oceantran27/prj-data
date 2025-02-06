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
    int titleToNumber(string s) {
        int res = 0;
        for(auto c: s){
            res *= 26;
            res += c - 'A' + 1;
        }
        return res;
    }
};
