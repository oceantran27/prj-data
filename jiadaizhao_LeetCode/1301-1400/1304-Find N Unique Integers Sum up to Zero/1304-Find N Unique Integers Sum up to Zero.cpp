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
    vector<int> sumZero(int n) {
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = i * 2 - n + 1;
        }
        
        return result;
    }
};
