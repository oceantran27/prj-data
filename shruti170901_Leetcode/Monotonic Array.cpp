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
    bool isMonotonic(vector<int>& A) {
        bool increase = true;
    bool decrease =true;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i+1]>A[i])
            decrease = false;
        if(A[i+1]<A[i])
            increase = false;
    
    }
    if(increase==false && decrease ==false)
        return false;
    else
        return true;
        
    }
};