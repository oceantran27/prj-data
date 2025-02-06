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
    vector<int> singleNumbers(vector<int>& nums) {
        int bit = 0;
        for (auto num: nums) {
            bit ^= num;
        }
        int flag = bit & ~(bit - 1);

        int num1 = 0;
        int num2 = 0;

        for (auto num: nums) {
            if (flag & num) {
                num1 ^= num;
            } else {
                num2 ^= num;
            }
        }

        return vector<int>{num1, num2};
    }
};