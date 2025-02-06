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
    vector<int> sortArrayByParityII(vector<int>& A) {
        int size=A.size();
        int even=0,odd=1;
        vector<int> ans(size);
        for (int i:A)
            if (i%2==0)
            {
                ans.at(even)=i;
                even+=2;
            }
            else
            {
                ans.at(odd)=i;
                odd+=2;
            }
        return ans;
    }
};
