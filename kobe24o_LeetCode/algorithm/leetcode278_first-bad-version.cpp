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
        int i = 1, j = n, mid;
        while(i <= j)
        {
        	mid = i+((j-i)>>1);
        	if(isBadVersion(mid) == false)
        		i = mid+1;
        	else
        		j = mid-1;
        }
        return i;
    }
};