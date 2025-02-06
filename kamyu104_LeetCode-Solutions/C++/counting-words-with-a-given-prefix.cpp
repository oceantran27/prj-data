#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n * p)
// Space: O(1)

// string
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        return count_if(cbegin(words), cend(words),
                        [&pref](const auto& x) {
                            return x.compare(0, size(pref), pref) == 0;
                        });
    }
};
