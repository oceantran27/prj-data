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
        int maxNum = 0, count = 0;
        for (int i = 0; i < arr.size(); ++i) {
            maxNum = max(maxNum, arr[i]);
            if (maxNum == i) ++count;
        }
        
        return count;
    }
};
