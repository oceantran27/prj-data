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
   int binsrch(int arr[], int l, int r ,int& k){
    while(l<=r){
        int mid = (l + r) /2;
        
        if(arr[mid] == k){
            return mid;
        }
        
        if(arr[mid] > k){
            r = mid -1;
        }
        if(arr[mid] < k){
            l = mid +1;
        }
    }
    return l;
}

int searchInsert(vector<int>& nums, int target) {
    int* arr = &nums[0];
    return binsrch(arr, 0, nums.size() -1, target);   
}
};
