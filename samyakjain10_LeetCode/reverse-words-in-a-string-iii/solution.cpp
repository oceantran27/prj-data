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
     string reverseWords(string s) {
        int i = 0;
        for(int j=0;j<s.size();j++) {
            if(s[j] == ' ') {
                reverse(s.begin()+i,s.begin()+j);
                i = j + 1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};
