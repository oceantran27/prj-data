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
        vector<int> result(n);
        for (auto b : bookings) {
            result[b[0] - 1] += b[2];
            if (b[1] < n) {
                result[b[1]] -= b[2];
            }
        }

        for (int i = 1; i < result.size(); ++i) {
            result[i] += result[i - 1];
        }

        return result;
    }
};
