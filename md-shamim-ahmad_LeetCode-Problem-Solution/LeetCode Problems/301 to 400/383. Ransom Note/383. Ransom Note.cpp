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
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        for (int i = 0; i < ransomNote.size(); i++) {
            mp[ransomNote[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < magazine.size(); i++) {
            if (mp[magazine[i]] > 0)
                mp[magazine[i]]--;
        }
        for (auto it: mp) {
            cnt += it.second;
        }
        return cnt == 0 ? true : false;
    }
};