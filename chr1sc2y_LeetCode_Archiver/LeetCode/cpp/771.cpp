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
    int numJewelsInStones(string J, string S) {
        unordered_set<char> jewel;
        int num = 0;
        for (auto j : J)
            jewel.insert(j);
        for (auto s: S) {
            if (jewel.find(s) != jewel.end())
                ++num;
        }
        return num;
    }
};