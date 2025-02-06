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
    int search(vector<int>& arr, int key) {
        int s = 0;
        int e = arr.size()-1;
        // as we only need to tell whether the key is present or not, hence sorting the vector
        sort(arr.begin(), arr.end());
        while(s<=e) {
            int mid = (s+e)/2;
            
            if(arr[mid] == key)
                return true;
            
            else if(key > arr[mid])
                s = mid+1;
            else
                e = mid-1;
        }
        
        return false;
    }
};
