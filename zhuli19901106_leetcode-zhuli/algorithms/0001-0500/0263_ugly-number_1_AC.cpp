#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
#include <vector>
using std::vector;

class Solution {
public:
    Solution() {
        pf.push_back(2);
        pf.push_back(3);
        pf.push_back(5);
    }
    
    bool isUgly(int num) {
        if (num <= 0) {
            return false;
        }
        int n = pf.size();
        int i;
        for (i = 0; i < n; ++i) {
            while (num % pf[i] == 0) {
                num /= pf[i];
            }
        }
        return num == 1;
    }
    
    ~Solution() {
        pf.clear();
    }
private:
    vector<int> pf;
};
