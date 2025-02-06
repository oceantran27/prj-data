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
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }

    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        
        if(n == 0 || n == 1){
            return n;
        }
        
        while(i < n){
            while(i+1 < n && nums[i] == nums[i+1]){
                i++;
            }
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        
        while(nums.size() != j){
            nums.pop_back();
        }
        
        return nums.size();
    }
};
