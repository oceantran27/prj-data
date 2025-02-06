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

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] - 'a') % 2 != (coordinates[1] - '1') % 2;
    }
};
