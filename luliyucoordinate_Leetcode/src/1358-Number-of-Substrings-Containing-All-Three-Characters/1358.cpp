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
    int numberOfSubstrings(string s) 
    {
        int cnt[3] = {0, 0, 0},res = 0 , l = 0, n = s.length();
        for (int r = 0; r < n; ++r)
        {
            ++cnt[s[r] - 'a'];
            while (cnt[0] && cnt[1] && cnt[2])
            {
                res += n - r;
                cnt[s[l++] - 'a']--;
            }
        }
        return res;
    }
};