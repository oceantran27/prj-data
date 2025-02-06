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
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> prefix;
        prefix.push_back(0);
        for (int &i:cardPoints)
            prefix.push_back(i+prefix.back());
        int ans=INT_MIN;
        int size=cardPoints.size();
        for (int i=0;i<=k;++i)
            ans=max(ans,prefix.at(i)+prefix.at(size)-prefix.at(size+i-k));
        return ans;
    }
};
