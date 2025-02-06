#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int countBalls(int lowLimit, int highLimit) {
        map<int, int> mp;
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0, x = i;
            while (x) {
                sum += x % 10;
                x /= 10;
            }
            mp[sum]++;
        }
        int ans = 0;
        for (auto p : mp) {
            ans = max(ans, p.second);
        }
        return ans;
    }
};