#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "LongestSubstringWithoutRepeatingCharacters.hpp"

using namespace std;

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(string s) {
    int map[256];
    fill(map, map + 256, -1);
    int ret = 0;
    int slow = 0;
    int fast = 0;

    for (; fast < s.size(); fast++) {
        if (map[s[fast]] >= slow) {
            ret = max(ret, fast - slow);
            slow = map[s[fast]] + 1;
        }

        map[s[fast]] = fast;
    }

    return max(ret, fast - slow);
}
