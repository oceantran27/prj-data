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
    int findKthPositive(vector<int>& arr, int k) 
    {
        int cur = 1;        
        for (int i=0; i<arr.size(); i++)
        {
            if (cur > arr[i]) continue;
            
            if (arr[i] - cur < k)
            {
                k -= (arr[i]-cur);
                cur = arr[i]+1;                    
            }
            else
            {
                cur += k-1;
                return cur;
            }            
        }
        return cur+k-1;
    }
};
