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
    int minAddToMakeValid(string S) {
        int bal = 0, left = 0;
        for (char c : S) {
            if (c == '(') {
                ++bal;
            }
            else {
                --bal;
            }
            if (bal < 0) {
                ++bal;
                ++left;
            }
        }
        return left + bal;
    }
};
