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
    int numSteps(string s) {
        int res = 0, add = 0, n = s.size();
        
        for (int i = n - 1; i; i--) {
            res++;
            if (s[i] - '0' + add == 1) {
                add = 1;
                res++;
            }
        }
        return res + add;
    }
};