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
    int countSubstrings(string s) {
        int cnt = 0, n = s.size();
        for (int i = 0; i < n; i++){
            int l = i - 1, r = i + 1;
            cnt++;
            while (l >= 0 && r < n && s[l] == s[r]){
                cnt++;
                l--;
                r++;
            }
            l = i, r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]){
                cnt++;
                l--;
                r++;
            }
        }
        return cnt;
    }
};