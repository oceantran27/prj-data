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
    int lastRemaining(int n, int m) {
        
        vector<int> f(n+1, 0);

        f[1] = 0;
        for (int i = 2; i <= n; i++) {
            f[i] = (f[i-1] + m) % i;
        }

        return f[n];
    }
};