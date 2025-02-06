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
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        int m=l+(h-l)/2;
        while(l<h){
            if(arr[m]<arr[m+1]){
                l=m+1;
            }
            else{
                h=m;
            }
            m=l+(h-l)/2;
        }
        return l;
    }
};
