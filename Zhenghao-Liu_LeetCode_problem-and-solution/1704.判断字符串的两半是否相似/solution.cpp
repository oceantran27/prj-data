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
    bool halvesAreAlike(string s) {
        int size=s.size();
        unordered_set<char> ust{'a','e','i','o','u','A','E','I','O','U'};
        int cnt=0;
        for (int i=0;i<size/2;i++) {
            if (ust.find(s.at(i))!=ust.end()) {
                ++cnt;
            }
        }
        for (int i=size/2;i<size;i++) {
            if (ust.find(s.at(i))!=ust.end()) {
                --cnt;
            }
        }
        return cnt==0;
    }
};
