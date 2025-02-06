#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countOrders(int n) {
        int MOD = 1e9 + 7;
        long result = 1;
        for (int i = 2; i <= n; ++i) {
            result = result * (i * 2 - 1) * i % MOD;
        }
        
        return result;
    }
};
