#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//因为是绕着圆形走，所以其实只用看最后一圈走在哪里
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> ans;
        ans.reserve(n);
        int cur=rounds.at(0);
        while (cur!=rounds.back())
        {
            ans.push_back(cur);
            ++cur;
            if (cur>n)
                cur=1;
        }
        ans.push_back(rounds.back());
        sort(ans.begin(),ans.end());
        return ans;
    }
};
