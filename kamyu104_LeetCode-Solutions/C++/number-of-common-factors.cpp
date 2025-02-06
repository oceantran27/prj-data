#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(log(min(a, b)) + sqrt(gcd))
// Space: O(1)

// math
class Solution {
public:
    int commonFactors(int a, int b) {
        const int g = gcd(a, b);  // log(min(a, b))
        int result = 0;
        for (int x = 1; x * x <= g; ++x) {
            if (g % x == 0) {
                result += g / x == x ? 1 : 2;
            }
        }
        return result;
    }
};
