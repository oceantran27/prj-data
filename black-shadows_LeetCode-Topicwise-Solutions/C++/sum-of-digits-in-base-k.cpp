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
    int sumBase(int n, int k) {
        int result = 0;
        for (; n; n /= k) {
            result += n % k;
        }
        return result;
    }
};
