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
    vector<int> grayCode(int n) {
        vector<int> result;
        int num = 1 << n;
        for (int i = 0; i < num; ++i) {
            result.push_back(i ^ (i / 2));
        }
        
        return result;
    }
};
