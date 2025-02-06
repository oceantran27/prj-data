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
        vector<int> result(2);
        int W;
        for (W = sqrt(area); W >= 1; --W) {
            if (area % W == 0) {
                break;
            }
        }
        
        result[0] = area / W;
        result[1] = W;
        return result;
    }
};
