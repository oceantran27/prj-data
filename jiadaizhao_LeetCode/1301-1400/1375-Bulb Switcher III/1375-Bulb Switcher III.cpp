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
    int numTimesAllBlue(vector<int>& light) {
        int right = 0, num = 0;
        for (int i = 0; i < light.size(); ++i) {
            right = max(right, light[i]);
            if (right == i + 1) {
                ++num;
            }
        }
        
        return num;
    }
};
