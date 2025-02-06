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
    int subtractProductAndSum(int n) {
        int product = 1, total = 0;
        for (; n; n /= 10) {
            product *= n % 10;
            total += n % 10;
        }
        return product - total;
    }
};
