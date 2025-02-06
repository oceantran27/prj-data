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
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int> sum;
        sum.push_back(0);
        for (vector<int> &i:mat)
        {
            vector<int> temp;
            for (int & j:sum)
                for (int &l:i)
                    temp.push_back(j+l);
            sort(temp.begin(),temp.end());
            sum=temp;
            sum.resize(min(k,(int)sum.size()));
        }
        return sum.back();
    }
};
