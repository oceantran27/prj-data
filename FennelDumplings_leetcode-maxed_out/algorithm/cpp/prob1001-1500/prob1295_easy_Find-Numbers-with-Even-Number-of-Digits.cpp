#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// prob1295: Find Numbers with Even Number of Digits

/*
 * https://leetcode-cn.com/problems/find-numbers-with-even-number-of-digits/
 */

#include <vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int n: nums)
            if((num_digits(n) & 1) == 0)
                ++ans;
        return ans;
    }

private:
    int num_digits(int x)
    {
        int ans = 0;
        while(x)
        {
            x /= 10;
            ++ans;
        }
        return ans;
    }
};
