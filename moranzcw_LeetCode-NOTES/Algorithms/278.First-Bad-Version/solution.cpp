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
        int i=1;
        int j=n;
        while(i<=j)
        {
            int mid=(j-i)/2+i;
            if(isBadVersion(mid))
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return i;
    }
};