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
    bool canPermutePalindrome(string s) {
        vector<int> cnt(256, 0);
        for(int i = 0; i < s.length(); ++i)
            cnt[s[i]]++;
        int odd_cnt = 0;
        for(int i = 0; i < 256; ++i)
            if(cnt[i] % 2 != 0 && ++odd_cnt > 1)
                return false;
        return true;
    }
    
};
