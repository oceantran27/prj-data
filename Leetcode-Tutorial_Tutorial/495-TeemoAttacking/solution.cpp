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
    int findPoisonedDuration(vector<int>& ts, int duration) {
        int ans = 0, now = 0;
        for(int i = 0; i < (int)ts.size(); i++){
            ans += duration;
            if (ts[i] < now) ans -= now - ts[i];
            now = ts[i] + duration;
        }
        return ans;
    }

};