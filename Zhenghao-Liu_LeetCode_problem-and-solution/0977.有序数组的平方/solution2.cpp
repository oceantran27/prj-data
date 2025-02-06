#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//因为一边是负数，一边是正数，可以双指针由外至内
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int size=A.size();
        vector<int> ans(size);
        int l=0,r=size-1,idx=size-1;
        while (l<=r)
        {
            int ll=A.at(l),rr=A.at(r);
            ll*=ll;
            rr*=rr;
            if (ll<rr)
            {
                ans.at(idx)=rr;
                --r;
            }
            else
            {
                ans.at(idx)=ll;
                ++l;
            }
            --idx;
        }
        return ans;
    }
};
