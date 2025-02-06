#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long beg=0;
        long end=n;
        long mid=n/2;
        while(end>beg)
        {
            
            if(isBadVersion(mid))
            {
               if(isBadVersion(mid-1))
                   end=mid-1;
                else
                    break;
            }
            else 
                beg=mid+1;
            
            mid=(beg+end)/2;
        }
        
       return mid;
        
    }
};
