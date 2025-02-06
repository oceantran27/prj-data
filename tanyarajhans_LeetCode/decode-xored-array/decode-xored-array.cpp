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
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> ans(n+1);
        ans[0]=first;
        int k=first;
        for(int i=0;i<n;i++){
            ans[i+1]=k^encoded[i];
            k=ans[i+1];
        }
        return ans;
    }
};