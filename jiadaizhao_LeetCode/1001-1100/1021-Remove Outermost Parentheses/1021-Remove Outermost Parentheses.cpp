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
    string removeOuterParentheses(string S) {
        string result;
        int bal = 0;
        for (char c : S) {
            if (c == '(') {
                if (bal++ > 0) {
                    result += c;
                }
            }
            else if (bal-- > 1) {
                result += c;
            }
        }
        return result;
    }
};
