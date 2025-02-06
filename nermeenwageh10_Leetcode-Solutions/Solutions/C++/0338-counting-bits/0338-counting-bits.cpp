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
    vector<int> countBits(int n) {
        vector<int> count(n + 1, 0);
        count[0] = 0;
        for (int i = 1; i <= n; i++){
            count[i] = (count[i>>1] + (i&1));
        }
        return count;
    }
};