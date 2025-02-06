#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn) = O(1)
// Space: O(1)

class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) {
            return false;
        }
        for (const auto& i : {2, 3, 5}) {
            while (num % i == 0) {
                num /= i;
            }
        }
        return num == 1;
    }
};
