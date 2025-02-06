#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/consecutive-numbers-sum/
// Author: github.com/lzl124631x
// Time: O(sqrt(N))
// Space: O(1)
// Ref: https://leetcode.com/problems/consecutive-numbers-sum/solution/
class Solution {
public:
    int consecutiveNumbersSum(int N) {
        while ((N & 1) == 0) N >>= 1;
        int ans = 1, d = 3;
        while (d * d <= N) {
            int e = 0;
            for (; N % d == 0; N /= d, ++e);
            ans *= e + 1;
            d += 2;
        }
        if (N > 1) ans <<= 1;
        return ans;
    }
};