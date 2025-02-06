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
    bool isValid(string S) {
        vector<int> St;
        for (char c : S) {
            if (c == 'c') {
                if (St.size() < 2 || St[St.size() - 2] != 'a' || St.back() != 'b') {
                    return false;
                }
                St.pop_back();
                St.pop_back();
            }
            else {
                St.push_back(c);
            }
        }

        return St.size() == 0;
    }
};
