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
    int fill (int n,int arr[])
    {
         if(n == 0 || n == 1)
            return 1;
        
        if(arr[n] > 0)
            return arr[n];
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans += fill(i,arr)*fill(n-i-1,arr);
        }
        
        arr[n]=ans;
        
        return ans;
    }
    
    int numTrees(int n) {
        
        int arr[n+1];
        
        for(int i=0;i<=n;i++)
            arr[i]=0;
        
        arr[n] = fill(n,arr);
        
        return arr[n];

    }
};
