#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// We are given N different types of stickers. Each sticker has a lowercase English word on it.
// You would like to spell out the given target string by cutting individual letters from your collection of stickers and rearranging them.
// You can use each sticker more than once if you want, and you have infinite quantities of each sticker.
// What is the minimum number of stickers that you need to spell out the target? If the task is impossible, return -1.

/* Example 1:

Input:
["with", "example", "science"], "thehat"

Output:
3

Explanation:
We can use 2 "with" stickers, and 1 "example" sticker.
After cutting and rearrange the letters of those stickers, we can form the target "thehat".
Also, this is the minimum number of stickers necessary to form the target string.

Example 2:

Input:
["notice", "possible"], "basicbasic"

Output:
-1

Explanation:
We can't form the target "basicbasic" from cutting letters from the given stickers. */

int helper(unordered_map<string, int>& dp, vector<vector<int>>& mp, string target) {
    if (dp.count(target)) return dp[target];
    int ans = INT_MAX, n = mp.size();
    vector<int> tar(26, 0);
    for (char c:target) tar[c-'a']++;
    // try every sticker
    for (int i = 0; i < n; i++) {
        // optimization
        if (mp[i][target[0]-'a'] == 0) continue;
        string s;
        // apply a sticker on every character a-z
        for (int j = 0; j < 26; j++)
            if (tar[j]-mp[i][j] > 0) s += string(tar[j]-mp[i][j], 'a'+j);
        int tmp = helper(dp, mp, s);
        if (tmp!= -1) ans = min(ans, 1+tmp);
    }
    dp[target] = ans == INT_MAX? -1:ans;
    return dp[target];
}

int minStickers(vector<string>& stickers, string target) {
  int m = stickers.size();
  vector<vector<int>> mp(m, vector<int>(26, 0));
  unordered_map<string, int> dp;
  // count characters a-z for each sticker
  for (int i = 0; i < m; i++)
      for (char c:stickers[i]) mp[i][c-'a']++;
  dp[""] = 0;
  return helper(dp, mp, target);
}
