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
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = 1e6;
        while (low < high) {
            int mid = (low + high) / 2;
            int count = 0;
            for (int num : nums) {
                count += (num + mid - 1) / mid;
            }
            if (count > threshold) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        
        return low;
    }
};
