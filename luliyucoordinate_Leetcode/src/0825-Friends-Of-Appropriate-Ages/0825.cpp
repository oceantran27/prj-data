#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int numFriendRequests(vector<int>& ages) 
    {
        int cnt[121] = {}, pre[121] = {};
        for (int a : ages) cnt[a]++;
        for (int i = 1; i < 121; i++) pre[i] = pre[i-1] + cnt[i];
        int res = 0;
        for (int i = 15; i < 121; i++)
            res += (pre[i] - pre[i/2 + 7] - 1)*cnt[i];
        return res;
    }
};