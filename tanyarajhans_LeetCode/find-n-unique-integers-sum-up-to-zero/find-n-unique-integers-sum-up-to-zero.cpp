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
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2==1)
            ans.push_back(0);
        for(int i=1;i<=n/2;i++)
            ans.push_back(i);
        for(int i=1;i<=n/2;i++)
            ans.push_back(-i);
        return ans;
    }
};