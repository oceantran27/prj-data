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
        int s=target.size();
        for(int i=1,j=0;i<=n;i++){
            if(j<target.size() && i==target[j]){
                ans.push_back("Push");
                j++;
                if(i==target[s-1]) break;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};