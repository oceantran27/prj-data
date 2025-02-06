#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Name: Pranav Avasthi
// Date: 8/10/2022

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // first or last element is peak element
        int s = 0;
        int e = arr.size() - 1;
        
        int mid = s + (e - s) / 2;
        
        // check for every other element
        while(s < e) {
             // check if the neighbors are smaller
            if(arr[mid] < arr[mid + 1]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};
