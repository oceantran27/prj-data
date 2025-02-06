#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n, ans = n;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                ans = min(ans, mid);
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        
        return ans;
    }
};
