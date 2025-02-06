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
    string baseNeg2(int N) {
        if(N == 0)
            return "0";
        string ans;
        int mod;
        while(N)
        {
        	mod = abs(N)%2;
        	ans += to_string(mod);
        	N = ceil(N/(-2.0));//负数向上取整，保证余数为正
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};