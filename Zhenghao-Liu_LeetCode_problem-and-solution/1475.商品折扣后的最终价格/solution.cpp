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
    vector<int> finalPrices(vector<int>& prices) {
        int size=prices.size();
        vector<int> ans=prices;
        for (int i=0;i<size;++i)
        {
            for (int j=i+1;j<size;++j)
                if (prices.at(j)<=prices.at(i))
                {
                    ans.at(i)-=prices.at(j);
                    break;
                }
        }
        return ans;
    }
};
