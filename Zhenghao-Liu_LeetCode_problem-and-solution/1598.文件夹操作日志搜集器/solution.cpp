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
    int minOperations(vector<string>& logs) {
        int ans=0;
        for (string &i:logs)
        {
            if (i=="./")
                continue;
            else if (i=="../")
            {
                --ans;
                if (ans<0)
                    ans=0;
            }
            else
                ++ans;
        }
        return ans;
    }
};
