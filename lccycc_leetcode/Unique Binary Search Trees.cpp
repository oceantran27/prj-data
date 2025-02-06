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
    int numTrees(int n) {
        vector<int> a;
        a.push_back(1);
        for (int i = 1; i<=n; i++){
            int tot = 0;
            for (int j = 0; j<=i-1; j++){
                tot += a[j]*a[i-1-j];
            }
            a.push_back(tot);
        }
        return a[n];
    }
};
