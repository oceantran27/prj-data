#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Problem: https://leetcode.com/problems/decompress-run-length-encoded-list/
#include<vector>

using namespace std;

class DecompressRLE {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> output;
     for (int index = 0; index < nums.size(); ++index){
         int freq = nums[index];
         int val = nums[index + 1];
         while(freq > 0) {
             output.push_back(val);
             --freq;
         }
         ++index;
     }
        return output;
    }
};