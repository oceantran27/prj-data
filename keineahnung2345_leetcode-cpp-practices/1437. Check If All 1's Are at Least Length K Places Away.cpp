#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Runtime: 144 ms, faster than 25.00% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
//Memory Usage: 57.6 MB, less than 100.00% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) continue;
            // if(last != INT_MIN)cout << i << ", " << i-last << endl;
            //i-last-1: the space count between last and i
            if(last != INT_MIN && i-last-1 < k){
                // cout <<endl;
                return false;
            }
            last = i;
        }
        // cout <<endl;
        return true;
    }
};
