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
    int findLongestChain(vector<vector<int>>& pairs) {
        auto cmp = [](vector<int> p1, vector<int> p2){
            return p1[1] < p2[1];
        };
        sort(begin(pairs),end(pairs),cmp);
        int count = 1;
        vector<int> curr = pairs[0];
        for(int i=1; i<pairs.size(); ++i){
            if(pairs[i][0]>curr[1]){
                curr = pairs[i];
                count++;
            }
        }
        return count;
    }
};