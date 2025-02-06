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
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA(0), sumB(0), half;
        unordered_set<int>s;
        for(auto& x: A) sumA += x;
        for(auto& x: B) sumB += x, s.insert(x);
        half = (sumA + sumB) / 2;
        for(auto& x: A) if(s.count(half - (sumA - x))) return {x, half - (sumA - x)};
    }
};
