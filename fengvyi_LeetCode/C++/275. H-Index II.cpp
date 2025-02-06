#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// O(n)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i = 0, j = citations.size() - 1;
        while(j >= 0 && citations[j] > i) i++, j--;
        return i;
    }
};

// Binary Search, O(logn)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int lo = 0, len = citations.size(), hi = len - 1;
        int mid = lo + (hi - lo) / 2;
        while(lo <= hi){
            if(citations[mid] >= len - mid) hi = mid - 1;
            else lo = mid + 1;
            mid = lo + (hi - lo) / 2;
        }
        return len - lo;
    }
};
