#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 769. Max Chunks To Make Sorted

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int len = arr.size();
        if (len <= 1) {
            return len;
        }
        
        int max = -1;
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            
            if (max == i) {
                count++;
                max = -1;
            }
        }
        
        return count;
    }
};
