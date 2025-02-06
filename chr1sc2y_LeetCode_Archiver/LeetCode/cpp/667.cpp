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
    vector<int> constructArray(int n, int k) {
        vector<int> ret;
        for (int i = 1, j = n; i <= j;) {
            if (k > 1)
                ret.push_back(k-- % 2? i++ : j--);
            else
                ret.push_back(i++);
        }
        return ret;
    }
};