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
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for (string &i:words)
            for (string &j:words)
                if (i!=j && j.find(i)!=string::npos)
                {
                    ans.push_back(i);
                    break;
                }
        return ans;
    }
};
