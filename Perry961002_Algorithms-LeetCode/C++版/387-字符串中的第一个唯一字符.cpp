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
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        for(auto c : s)
            count[c - 'a'] ++;
        for(int i=0;i<s.size();i++){
            if(count[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};