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
    int pivotInteger(int t) {
        int s=1,n=t,sums=1,sumb=n;
        if(n==s)return n;
        while(s<n){
            if(sums<sumb)
                sums+=++s;
            else
                sumb+=--n;
            if(sums==sumb && n!=t && s+1==n-1)return s+1;
        }
    
        return -1;
    }
};