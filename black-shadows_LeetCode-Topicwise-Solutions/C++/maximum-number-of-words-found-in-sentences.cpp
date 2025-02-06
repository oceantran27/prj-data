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

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        return 1 + accumulate(cbegin(sentences), cend(sentences), 0,
                              [](int result, const auto &s) {
                                  return max(result, static_cast<int>(count(cbegin(s), cend(s), ' ')));
                              });
    }
};
