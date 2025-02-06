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
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int ans = 0;
        for(int x: gain)
        {
            sum += x;
            ans = max(ans, sum);
        }
        return ans;
    }
};
