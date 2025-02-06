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
    int repeatedNTimes(vector<int> &A) {
        unordered_set<int> s;
        for (auto a:A) {
            if (s.find(a) == s.end())
                s.insert(a);
            else
                return a;
        }
    }
};
