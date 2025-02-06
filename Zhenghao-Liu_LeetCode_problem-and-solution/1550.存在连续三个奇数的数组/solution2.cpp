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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size=arr.size();
        int ans=0;
        for (int i:arr)
        {
            if (i%2==1)
                ++ans;
            else
                ans=0;
            if (ans==3)
                return true;
        }
        return false;
    }
};
