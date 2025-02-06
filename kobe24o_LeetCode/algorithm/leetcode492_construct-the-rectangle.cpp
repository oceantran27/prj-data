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
        int W = sqrt(area), L = area/W;
        while(W*L != area)
        {
        	W--;
        	L = area/W;
        }
        return{L,W};
    }
};