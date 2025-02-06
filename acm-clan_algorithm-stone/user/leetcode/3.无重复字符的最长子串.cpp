#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <iostream>
#include <map>
#include <queue>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unordered_set>

using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() == 0)
            return 0;
        unordered_set<char> hash;
        int m = 0;
        int left = 0;

        for (int i = 0; i < s.size(); i++) {
            // 存在就删除到存在的元素处
            while (hash.find(s[i]) != hash.end()) {
                hash.erase(s[left]);
                left++;
            }

            // 更新最长区间
            m = max(m, i - left + 1);
            // 插入新元素
            hash.insert(s[i]);
        }

        return m;
    }
};
// @lc code=end
