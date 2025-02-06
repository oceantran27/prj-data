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
    int totalFruit(vector<int> &tree)
    {

        unordered_map<int, int> map;
        int n = tree.size();
        int l = 0, r = 0, ans = 0, count = 0;
        while (r < n)
        {
            if (map[tree[r]] == 0)
                count++;
            map[tree[r]]++;
            r++;
            while (l < r && count > 2)
            {
                map[tree[l]]--;
                if (map[tree[l]] == 0)
                    count--;
                l++;
            }
            ans = max(ans, r - l);
        }
        return ans;
    }
};