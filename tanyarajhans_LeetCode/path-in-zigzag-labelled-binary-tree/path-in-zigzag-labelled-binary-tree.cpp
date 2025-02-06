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
    vector<int> pathInZigZagTree(int label) {
        int l=1,c=1;
        vector<int> ans;
        while(c*2<=label){
            c*=2;
            l++;
        }
        while(label!=0){
            ans.push_back(label);
            int maxi=((int)pow(2,l))-1;
            int mini=((int)pow(2,l-1));
            label=(int)(maxi+mini-label)/2;
            l--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};