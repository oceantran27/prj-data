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
    int findDuplicate(vector<int>& nums) {
        vector<int>& n=nums;
        sort(n.begin(),n.end());
        int t=n.size();
        for(int i=0;i<t-1;i++){
            if(n[i]==n[i+1])return n[i];
        }
        return 0;
    }
};
