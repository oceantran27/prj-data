#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int len = 0;
        int maxLen = 0;

        for (auto i : nums) {
            len = i == 0 ? 0 : len + 1;
            maxLen = max(maxLen, len);
        }

        return maxLen;
    }
};