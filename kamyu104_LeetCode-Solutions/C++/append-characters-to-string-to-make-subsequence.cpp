#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// two pointers, greedy
class Solution {
public:
    int appendCharacters(string s, string t) {
        for (int j = 0, i = 0; j < size(t); ++j) {
            for (; i <= size(s); ++i) {
                if (i == size(s)) {
                    return size(t) - j;
                }
                if (s[i] == t[j]) {
                    ++i;
                    break;
                }
            }
        }
        return 0;
    }
};
