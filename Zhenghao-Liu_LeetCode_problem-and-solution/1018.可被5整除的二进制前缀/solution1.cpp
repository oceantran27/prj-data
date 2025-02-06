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
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int size=A.size();
        vector<bool> ans(size);
        int num=0;
        for (int i=0;i<size;i++) {
            num<<=1;
            num+=A.at(i);
            num%=5;
            if (num==0) {
                ans.at(i)=true;
            }
        }
        return ans;
    }
};
