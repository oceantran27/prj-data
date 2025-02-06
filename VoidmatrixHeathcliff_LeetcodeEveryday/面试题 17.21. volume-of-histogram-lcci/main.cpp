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
    int trap(vector<int>& height) {
        int iSum = accumulate(height.begin(), height.end(), 0);
        int iVolume = 0, iIndexLayer = 1, iIndexLeft = 0, iIndexRight = height.size() - 1;
        while (iIndexLeft <= iIndexRight) {
            while (iIndexLeft <= iIndexRight && height[iIndexLeft] < iIndexLayer) iIndexLeft++;
            while (iIndexLeft <= iIndexRight && height[iIndexRight] < iIndexLayer) iIndexRight--;
            iVolume += iIndexRight - iIndexLeft + 1;
            iIndexLayer++;
        }
        return iVolume - iSum;
    }
};