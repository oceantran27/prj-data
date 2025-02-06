#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogx), x is the max denominator
// Space: O(n)

class Solution {
public:
    string fractionAddition(string expression) {
        istringstream iss(expression);
        int A = 0, B = 1, a, b;
        char _;
        while (iss >> a >> _ >> b) {
            A = A * b + a * B;
            B *= b;
            auto g = abs(__gcd(A, B));
            A /= g;
            B /= g;
        }
        return to_string(A) + '/' + to_string(B);
    }
};
