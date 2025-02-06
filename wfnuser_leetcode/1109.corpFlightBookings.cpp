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
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+2, 0);
        vector<int> ans;

        for (auto b: bookings) {
            diff[b[0]] += b[2];
            diff[b[1]+1] -= b[2];
        }

        int seats = 0;
        for (int i = 1; i <= n; i++) {
            seats += diff[i];
            ans.push_back(seats);
        }

        return ans;
    }
};
