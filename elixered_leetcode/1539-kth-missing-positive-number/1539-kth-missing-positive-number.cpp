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
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            while(arr[i]>curr)
            {
                if(k==1) return curr;
                k--;
                curr++;
            }
            curr++;
        }
        return curr+k-1;
    }
};