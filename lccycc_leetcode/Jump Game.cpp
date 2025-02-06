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
    bool canJump(int A[], int n) {
        if (n<=1) return true;
        int r = 0;
        for (int i = 0; i<=r; i++){
            r = max(r, A[i]+i);
            if (r>=n-1) return true;
        }
        return false;
    }
};

