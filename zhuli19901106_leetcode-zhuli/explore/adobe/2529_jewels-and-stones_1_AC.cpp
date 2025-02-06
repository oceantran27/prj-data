#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/explore/interview/card/apple/348/others/3144/
#include <unordered_set>
using std::unordered_set;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> us;
        for (auto &ch: J) {
            us.insert(ch);
        }
        int count = 0;
        for (auto &ch: S) {
            if (us.find(ch) != us.end()) {
                ++count;
            }
        }
        return count;
    }
};
