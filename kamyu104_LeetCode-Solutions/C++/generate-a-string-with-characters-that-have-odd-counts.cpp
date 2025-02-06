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
    string generateTheString(int n) {
        auto result = string(n - 1, 'a');
        result.push_back(n % 2 ? 'a' : 'b');
        return result;
    }
};
