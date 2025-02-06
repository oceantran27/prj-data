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
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for (vector<int> &i:accounts)
        {
            int sum=0;
            for (int j:i)
                sum+=j;
            ans=max(ans,sum);
        }
        return ans;
    }
};
