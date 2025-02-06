#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* next_permutation(a,b)和prev_permutation(a,b)这两个库函数
* https://blog.csdn.net/ac_gibson/article/details/45308645
*/
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        do
        {
            answer.push_back(vector<int>(nums));
        }while(next_permutation(nums.begin(),nums.end()));   
        return answer;
    }
};
