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
    int concatenatedBinary(int n) {
        int x = 1;
        int mod = 1e9+7;
        long long ans = 0;
        for(int i = 0; i < 32 and pow(2, i) <= n and x <= n; i++){
            for(int j = 0; j < pow(2, i) and x <=n; j++){
                ans = (ans << (i+1)) + x;
                ans%=mod;
                x++;
            }
        }
        return ans%mod;
    }
};
