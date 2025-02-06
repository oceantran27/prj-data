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
    int findNumbers(vector<int> &nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int cnt = 0, num = nums[i];
            while (num != 0) {
                num /= 10;
                cnt++;
            }
            if (!(cnt & 1))
                ans++;
        }
        return ans;
    }
};
