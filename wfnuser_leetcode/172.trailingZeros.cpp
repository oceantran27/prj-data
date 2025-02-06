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
    int trailingZeroes(int n) {
        int ans = 0;
        while(n) {
            ans += n / 5;
            n /= 5;
        }

        return ans;
    }
};