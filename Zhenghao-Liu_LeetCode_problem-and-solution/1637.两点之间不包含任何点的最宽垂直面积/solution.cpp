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
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=0;
        int size=points.size();
        for (int i=1;i<size;++i)
            ans=max(ans,points.at(i).at(0)-points.at(i-1).at(0));
        return ans;
    }
};
