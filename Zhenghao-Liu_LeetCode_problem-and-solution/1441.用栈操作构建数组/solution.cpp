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
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int index=1;
        vector<int> mask;
        for (int i=0;i<target.size();++i)
        {
            if (target.at(i)!=index)
            {
                while (target.at(i)!=index)
                {
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    ++index;
                }
            }
            ans.push_back("Push");
            ++index;
        }
        return ans; 
    }
};
