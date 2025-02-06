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
    int searchInsert(int A[], int n, int target) {
        if (n<=0) return 0;
        if (A[0]>target) return 0;
        int l = 0, r = n;
        while (l+1<r){
            int mid = (l+r)/2;
            if (A[mid] > target) r = mid;
            else l = mid;
        }
        if (A[l] == target) return l;
        return l+1;
    }
};

