#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 492 Construct the Rectangle.cpp

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int i = sqrt(area);
        while (area % i) {
            i--;
        }
        return {area / i, i};
    }
};