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
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0; i<n; i++){
            int left = i;
            int right = n-i;
            int val = (left+1)*(right) +1 ;
            sum += arr[i]*(val/2);
        }
        
        return sum;
    }
};