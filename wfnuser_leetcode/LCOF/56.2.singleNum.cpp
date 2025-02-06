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
    int singleNumber(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;

        for (auto num: nums) {
            int last1 = cnt1;
            int last2 = cnt2;

            cnt1 = ((num)&(~last1)&(~last2)) | ((~num)&(~last2)&last1);
            cnt2 = ((num)&(last1)&(~last2)) | ((~num)&(~last1)&last2);
        }

        return cnt1;
    }
};