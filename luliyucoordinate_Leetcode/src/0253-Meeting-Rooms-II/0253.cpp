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
    int minMeetingRooms(vector<Interval>& intervals) 
    {
        map<int, int> m;
        for (auto& it : intervals) 
        {
            m[it[0]]++, m[it[1]]--;
        }

        int res = 0, n = 0;
        for (auto& it : m) 
        {
            n += it.second;
            res = max(res, n); 
        }
        return res;
    }
}