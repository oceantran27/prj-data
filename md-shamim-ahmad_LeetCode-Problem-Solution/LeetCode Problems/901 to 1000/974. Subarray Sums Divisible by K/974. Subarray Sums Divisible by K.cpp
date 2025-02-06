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
    int subarraysDivByK(vector<int> &nums, int k) {
        int sum = 0, cnt = 0, rem;
        vector<int> prefix(k, 0);
        prefix[0]++;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            rem = (sum % k + k) % k;
            cnt += prefix[rem];
            prefix[rem]++;
        }
        return cnt;
    }
};