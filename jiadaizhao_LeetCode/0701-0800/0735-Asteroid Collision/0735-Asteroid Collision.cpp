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
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> St;
        for (int a : asteroids) {
            while (!St.empty() && St.back() > 0 && St.back() < -a) {
                St.pop_back();
            }
            
            if (St.empty() || St.back() < 0 || a > 0) {
                St.push_back(a);
            }
            else if (St.back() == -a) {
                St.pop_back();
            }
        }
        
        return St;
    }
};
