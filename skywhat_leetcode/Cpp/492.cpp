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
        int width = sqrt(area);
        while(area%width != 0){
            width--;
        }
        
        return vector<int>{area/width, width};
    }
};
