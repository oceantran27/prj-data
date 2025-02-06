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
    vector<int> findPermutation(string s) {
        vector<int>res;
        for(int i = 1; i <= s.size() + 1; i++) res.push_back(i);
        for(int i = 0; i < s.size(); i++){
            int j = i;
            while(j < s.size() && s[j] == 'D') j++;
            reverse(res.begin() + i, res.begin() + j + 1);
            i = j;
        }
        return res;
    }
};
