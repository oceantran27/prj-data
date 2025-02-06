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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& x: A){
            reverse(x.begin(), x.end());
            for(auto& y: x) y ^= 1;
        }
        return A;
    }
}; 
