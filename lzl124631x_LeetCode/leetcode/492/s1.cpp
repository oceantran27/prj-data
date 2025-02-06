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
    vector<int> constructRectangle(int area) {
        int L = sqrt(area), W = area / L;
        if (L * L == area) return { L, L };
        while (L * W != area || L < W) {
            ++L;
            W = area / L;
        }
        return { L, W };
    }
};