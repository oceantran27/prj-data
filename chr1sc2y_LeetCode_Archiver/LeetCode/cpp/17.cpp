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
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n == 0) return vector<string>();
        char a = 'a';
        for (int i = 0; i < 8; ++i) {
            tran.push_back(vector<char>());
            for (int j = 0; j < 3; ++j)
                tran[i].push_back(a++);
            if(i == 5)
                tran[i].push_back(a++);
        }
        tran[7].push_back(a);
        string temp;
        vector<string> ret;
        BackTracking(digits, n, 0, temp, ret);
        return ret;
    }

    void BackTracking(string digits, int &n, int i, string &temp, vector<string> &ret) {
        if (i == n) {
            ret.push_back(temp);
            return;
        }
        for (int j = 0; j < (tran[digits[i] - '0' - 2]).size(); ++j) {
            temp.push_back(tran[digits[i] - '0' - 2][j]);
            BackTracking(digits, n, i + 1, temp, ret);
            temp.pop_back();
        }
    }

private:
    vector<vector<char>> tran;
};
