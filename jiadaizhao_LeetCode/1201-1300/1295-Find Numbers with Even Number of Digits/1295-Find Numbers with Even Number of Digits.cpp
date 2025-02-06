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
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            int len = 0;
            while (num) {
                ++len;
                num /= 10;
            }
            if ((len & 1) == 0) {
                ++count;
            }
        }
        return count;
    }
};
