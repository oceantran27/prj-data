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
    void helper(vector<int>& candidates, int target, vector<vector<int>> &ans,vector<int> &combination, int start){
        if(target==0){
            ans.push_back(vector<int> (combination.begin(), combination.end()));
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                break;
            }
            combination.push_back(candidates[i]);
            helper(candidates, target-candidates[i],ans,combination,i);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>> ans;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        helper(candidates,target,ans,combination,0);
        return ans;
    }
};
