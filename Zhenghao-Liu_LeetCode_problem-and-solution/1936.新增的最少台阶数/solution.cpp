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
    int addRungs(vector<int>& rungs, int dist) {
        int cur=0;
        int ans=0;
        for (int i:rungs) {
            ans+=(i-1-cur)/dist;
            cur=i;
        }
        return ans;
    }
};