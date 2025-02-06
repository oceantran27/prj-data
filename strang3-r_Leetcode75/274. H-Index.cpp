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
    int hIndex(vector<int>& a) {
        int lo = 0, hi = a.size() - 1, mid;
        sort(a.begin(), a.end());
        while(lo <= hi) {
            mid = (lo + hi) >> 1;
            if(a[mid] < a.size() - mid) lo = mid + 1;
            else hi = mid - 1;
        }
        return a.size() - lo;
    }
};
