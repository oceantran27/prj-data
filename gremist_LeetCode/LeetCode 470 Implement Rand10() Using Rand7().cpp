#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 470 Implement Rand10() Using Rand7().cpp

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int r;
        do {
            r = 7 * (rand7() - 1) + rand7();
        } while (r > 40);
        return r % 10 + 1;
    }
};