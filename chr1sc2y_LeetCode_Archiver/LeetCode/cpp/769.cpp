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
    int maxChunksToSorted(vector<int> &arr) {
        int maxChunk = 0, til = 0;
        for (int i = 0; i < arr.size(); ++i) {
            til = max(til, arr[i]);
            if (til == i)
                ++maxChunk;
        }
        return maxChunk;
    }
};
