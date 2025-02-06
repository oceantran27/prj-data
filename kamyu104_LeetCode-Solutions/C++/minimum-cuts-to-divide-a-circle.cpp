#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math
class Solution {
public:
    int numberOfCuts(int n) {
        return n == 1 ? 0 : (n % 2 ? n : n / 2);
    }
};
