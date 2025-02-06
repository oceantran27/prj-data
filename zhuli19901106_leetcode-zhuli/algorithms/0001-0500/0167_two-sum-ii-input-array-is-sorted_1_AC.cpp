#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// medium
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        vector<int> res(2, -1);
        int val;
        while (i < j) {
            val = numbers[i] + numbers[j];
            if (val < target) {
                ++i;
            } else if (val > target) {
                --j;
            } else {
                res[0] = i + 1;
                res[1] = j + 1;
                break;
            }
        }
        return res;
    }
};
