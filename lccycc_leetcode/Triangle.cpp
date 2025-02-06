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
    int minimumTotal(vector<vector<int> > &triangle) {
        for (int i = 1; i<triangle.size(); i++){
            triangle[i][0] += triangle[i-1][0];
            triangle[i].back() += triangle[i-1].back();
            for (int j = 1; j+1<triangle[i].size(); j++){
                triangle[i][j] += min(triangle[i-1][j], triangle[i-1][j-1]);
            }
        }
        int ans = triangle.back()[0];
        for (int x : triangle.back()){
            ans = min(ans, x);
        }
        return ans;
    }
};
