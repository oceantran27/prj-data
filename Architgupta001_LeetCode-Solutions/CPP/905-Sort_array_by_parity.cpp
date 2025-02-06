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

    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int>v;

        for (int i=0;i<nums.size();i++){

            if(nums[i]%2==0){

                v.push_back(nums[i]);

            }

        }

        for(int i=0;i<nums.size();i++){

            if(nums[i]%2!=0){

                



            v.push_back(nums[i]);}

        }

        return v;

    }

    

};
