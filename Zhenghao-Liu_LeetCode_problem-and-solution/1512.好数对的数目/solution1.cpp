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
    int numIdenticalPairs(vector<int>& nums) {
        int size=nums.size();
        int ans=0;
        for (int i=0;i<size;++i)
            for (int j=i+1;j<size;++j)
                if (nums.at(i)==nums.at(j))
                    ++ans;
        return ans;
    }
};
