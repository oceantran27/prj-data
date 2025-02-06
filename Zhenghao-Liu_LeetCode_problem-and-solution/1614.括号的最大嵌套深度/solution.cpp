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
    int maxDepth(string s) {
        int left=0;
        int ans=0;
        for (char i:s)
        {
            if (i=='(')
            {
                ++left;
                ans=max(ans,left);
            }
            else if (i==')')
                --left;
        }
        return ans;
    }
};
