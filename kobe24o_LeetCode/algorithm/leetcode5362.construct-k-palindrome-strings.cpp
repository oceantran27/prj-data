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
    bool canConstruct(string s, int k) {
        if(s.size() < k)
            return false;
        int count[26] = {0};
        for(int i = 0; i < s.size(); ++i)
            count[s[i]-'a']++;
        int odd = 0;
        for(int i = 0; i < 26; ++i)
        {
            if(count[i]%2 == 1)
                odd++;
        }       
        return odd <= k;
    }
};