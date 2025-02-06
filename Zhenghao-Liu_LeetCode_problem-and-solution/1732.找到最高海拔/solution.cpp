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
    int largestAltitude(vector<int>& gain) {
        int cur=0;
        int ans=0;
        for (int i:gain) {
            cur+=i;
            ans=max(ans,cur);
        }
        return ans;
    }
};
