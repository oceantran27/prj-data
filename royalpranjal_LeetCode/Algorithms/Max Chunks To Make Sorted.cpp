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
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size(), ans = 0, last = 0;
    
        for(int i = 0; i < n; i++){
            last = max(last, arr[i]);
            if(i == last){
                ans++;
            }
        }
        
        
        return ans;
    }
};
