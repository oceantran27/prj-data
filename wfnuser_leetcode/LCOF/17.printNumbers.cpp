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
    vector<int> printNumbers(int n) {
        vector<int> ans;
        int bound = 1;
        while (n) {
            bound *= 10;
            n--;
        }
        for (int i = 1; i < bound; i++) {
            ans.push_back(i);
        }
        
        return ans;
    }
};