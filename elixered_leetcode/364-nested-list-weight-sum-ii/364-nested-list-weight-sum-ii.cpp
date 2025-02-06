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
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        int unweighted = 0, weighted = 0;
        while(!nestedList.empty()){
            vector<NestedInteger> tmp;
            for(auto& iter : nestedList){
                if(iter.isInteger())
                    unweighted += iter.getInteger();
                else{
                    vector<NestedInteger>& t = iter.getList();
                    for(int i = 0; i < t.size(); i++)
                        tmp.push_back(t[i]);
                }
            }
            weighted += unweighted;
            nestedList = tmp;
        }
        return weighted;
    }
};