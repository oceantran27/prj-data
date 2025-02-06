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
    int minimumMoves(string s) {
        int result = 0;
        for (int i = 0; i < size(s); i += (s[i] == 'X') ? 3 : 1) {
            result += (s[i] == 'X');
        }
        return result;
    }
};
