#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        if (n <= 1) return n;
        return sqrt(n);
    }
};

// Test
int main()
{
    Solution sol;
    int n = 89;
    auto res = sol.bulbSwitch(n);
    cout << res << endl;

    return 0;
}