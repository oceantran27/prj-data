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
    int passThePillow(int n, int time) {
        return n - abs((n - 1) - (time % (2 * (n - 1))));
    }
};
