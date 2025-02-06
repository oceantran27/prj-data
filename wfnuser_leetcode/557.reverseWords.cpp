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
        int pre = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cout << i << endl;
                reverse(s.begin()+pre, s.begin()+i);
                pre = i+1;
            }
        }
        reverse(s.begin()+pre, s.end());

        return s;
    }
};