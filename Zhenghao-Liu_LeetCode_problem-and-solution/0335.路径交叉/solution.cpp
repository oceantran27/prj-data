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
    bool isSelfCrossing(vector<int>& x) {
        int x_size=x.size();
        for (int i=3;i<x_size;++i)
        {
            if (i>=3 && x.at(i-1)<=x.at(i-3) && x.at(i)>=x.at(i-2))
                return true;
            if (i>=4 && x.at(i-3)==x.at(i-1) && x.at(i)+x.at(i-4)>=x.at(i-2))
                return true;
            if (i>=5 && x.at(i)+x.at(i-4)>=x.at(i-2) && x.at(i-1)+x.at(i-5)>=x.at(i-3) && x.at(i-2)>x.at(i-4) && x.at(i-3)>x.at(i-1))
                return true;
        }
        return false;
    }
};
