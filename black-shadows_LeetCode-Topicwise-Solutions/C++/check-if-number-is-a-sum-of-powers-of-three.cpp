#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    bool checkPowersOfThree(int n) {
        for (; n > 0 && n % 3 != 2; n /= 3);
        return n == 0;
    }
};
