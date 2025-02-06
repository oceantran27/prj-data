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
    int countSegments(string s) {
        int i = 0;
        while(i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i >= s.size()) return 0;
        int cnt = 1;
        while(i < s.size()) {
            if (s[i] == ' ') {
                cnt++;
            } else {
                i++;
                continue;
            }
            while(i < s.size() && s[i] == ' ') {
                i++;
            }
        }
        if (s[s.size()-1] == ' ') cnt--;

        return cnt;
    }
};