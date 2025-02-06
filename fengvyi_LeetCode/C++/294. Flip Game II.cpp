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
    bool canWin(string s) {
        for(int i = 1; i < s.size(); i++)
            if(s[i - 1] == '+' && s[i] == '+'){
                s[i - 1] = s[i] = '-';
                if(!canWin(s)) return true;
                s[i - 1] = s[i] = '+';
            }
        return false;
    }
};
