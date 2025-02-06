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
    vector<vector<int>> permute(vector<int>& nums)
     {
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        do
        {
            answer.push_back(vector<int>(nums));
        }while(next_permutation(nums.begin(),nums.end()));   
	    return answer;
    }
};
