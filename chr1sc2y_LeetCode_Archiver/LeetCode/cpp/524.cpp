#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
  public:
    string findLongestWord(string s, vector<string> &d) {
        string res = "";
        for (auto curr : d) {
            int j = 0, k = 0;
            while (k < s.size() && j < curr.size()) {
                if (s[k] == curr[j])
                    ++j;
                ++k;
            }
            if (j == curr.size())
                if (res.size() < curr.size() || (res.size() == curr.size() && res > curr))
                    res = curr;
        }
        return res;
    }
};
