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
        int sz=arr.size();
        int l=1,r=sz-2;
        while (l<r) {
            int mid=l+(r-l+1)/2;
            if (arr.at(mid)>arr.at(mid-1)) {
                l=mid;
            } else {
                r=mid-1;
            }
        }
        return l;
    }
};