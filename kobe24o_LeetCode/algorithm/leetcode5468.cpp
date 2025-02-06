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
        int i = 1, ans = 1, idx = 0, K = k;
        while(idx < arr.size())
        {
            if(arr[idx] != i)
            {
                k--;
                ans = i;
            }
            else
                idx++;
            if(k == 0)
                break;
            i++;
            
        }
        return k!=0 ? arr[arr.size()-1]+k : ans;
    }
};