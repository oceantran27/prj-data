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
        int left=0, right=arr.size(), mid=arr.size()/2;
        while (left < right) 
        {
            mid = (left + right)/2;
            
            if (arr[mid] - mid - 1 < k) //if number of missing numbers at mid is less than k
                left = mid + 1;
            else
                right = mid;
        }
        return left + k;
    }
};
