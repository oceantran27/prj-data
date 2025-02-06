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
    int peakIndexInMountainArray(vector<int> &A) {
        int start = 0, end = A.size(), mid = 0;
        while (start < end) {
            mid = (start + end) / 2;
            if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
                break;
            else if (A[mid] < A[mid + 1])
                start = mid + 1;
            else
                end = mid;
        }
        return mid;
    }
};