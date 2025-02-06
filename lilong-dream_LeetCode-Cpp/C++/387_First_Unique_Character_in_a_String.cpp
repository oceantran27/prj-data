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
        vector<int> vec(26, 0);
        for(char ch : s) {
            vec[ch - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) {
            if(vec[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

