#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
# include "headfile.h"
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        string cur = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                cur += "%20";
                continue;
            }
            cur += s[i];
        }
        return cur;
    }
};