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
    double calculateTax(vector<vector<int>> &brackets, int income) {
        double tax = 0;
        int prev = 0;
        for (auto it: brackets) {
            int rep = min(income, it[0]);
            tax += double(rep - prev) * (double) it[1] / 100.0;
            prev = it[0];
            if (income <= it[0])
                break;
        }
        return tax;
    }
};