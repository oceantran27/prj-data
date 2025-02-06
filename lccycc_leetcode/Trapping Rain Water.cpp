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
    int trap(int A[], int n) {
        if (n == 0) return 0;
        int maxh = 0;
        for (int i = 0; i<n; i++) if (A[i] > A[maxh]) maxh = i;
        int ans = 0, maxbar = 0;
        for (int i = 0; i<maxh; i++){
            maxbar = max(maxbar, A[i]);
            ans += maxbar - A[i];
        }
        maxbar = 0;
        for (int i = n-1; i>maxh; i--){
            maxbar = max(maxbar, A[i]);
            ans += maxbar - A[i];
        }
        return ans;
    }
};
