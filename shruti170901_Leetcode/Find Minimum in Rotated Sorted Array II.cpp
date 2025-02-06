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
    int findMin(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        while(low < high) { 
            int mid = low + (high - low)/2; 
            if (arr[mid] == arr[high]) high--; 
            else if(arr[mid] > arr[high]) low = mid + 1; 
            else high = mid; 
        } 
        return arr[high]; 
    }
};
