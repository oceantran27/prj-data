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
    int peakIndexInMountainArray(vector<int>& A) {
        int l = 0;
        int r = A.size() - 1;

        while(l<r) {
            int mid = (l+r) / 2;
            if (A[mid]<A[mid+1]) {
                l = mid+1;
            } else {
                r = mid;
            }
        }
        return l;
    }
};