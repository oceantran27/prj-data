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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<groupSizes.size();i++){
            m[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto i:m){
            int c=i.second.size()/i.first;
            int k=0;
            for(int j=0;j<c;j++){
                vector<int> temp;
                for(int l=0;l<i.first;l++){
                    temp.push_back(i.second[k++]);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};