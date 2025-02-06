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
    int jump(vector<int>& nums) {
        int n=nums.size(),last=0;
        vector<int> f(n);
        f[0]=0;
        for(int i=1;i<n;++i){
          while(i>last+nums[last]) ++last;
          f[i]=f[last]+1;
        }
        return f[n-1];
    }
};