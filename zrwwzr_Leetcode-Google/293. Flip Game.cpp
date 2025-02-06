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
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> res;
        for(int i = 1; i < s.length(); ++i){
            if(s[i] == s[i - 1] && s[i] == '+'){
                s.replace(i - 1, 2, "--");
                res.push_back(s);
                s.replace(i - 1, 2, "++");
            }
        }
        return res;
    }
};
