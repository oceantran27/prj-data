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
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) result[i - 1] += "Fizz";
            if (i % 5 == 0) result[i - 1] += "Buzz";
            if (result[i - 1].empty()) result[i - 1] += to_string(i);
        }
        return result;
    }
};