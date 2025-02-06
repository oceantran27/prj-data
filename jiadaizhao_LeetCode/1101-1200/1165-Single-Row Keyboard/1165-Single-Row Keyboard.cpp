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
    int calculateTime(string keyboard, string word) {
        unordered_map<char, int> table;
        for (int i = 0; i < keyboard.size(); ++i) {
            table[keyboard[i]] = i;
        }
        int time = 0, prev = 0;
        for (char c : word) {
            time += abs(table[c] - prev);
            prev = table[c];
        }
        return time;
    }
};
