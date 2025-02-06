#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <string>
using std::to_string;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        int i;
        string s;
        for (i = 1; i <= n; ++i) {
            s.clear();
            if (i % 3 != 0 && i % 5 != 0) {
                s = to_string(i);
            }
            if (i % 3 == 0) {
                s += "Fizz";
            }
            if (i % 5 == 0) {
                s += "Buzz";
            }
            v.push_back(s);
        }
        return v;
    }
};
