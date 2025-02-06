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
    string alphabetBoardPath(string target) {
        string result;
        int row = 0, col = 0;
        for (char c : target) {
            int tr = (c - 'a') / 5;
            int tc = (c - 'a') % 5;
            if (col > tc) {
                result += string(col - tc, 'L');
            }
            if (row < tr) {
                result += string(tr - row, 'D');
            }
            if (row > tr) {
                result += string(row - tr, 'U');
            }
            if (col < tc) {
                result += string(tc - col, 'R');
            }
            result += '!';
            row = tr;
            col = tc;
        }

        return result;
    }
};
