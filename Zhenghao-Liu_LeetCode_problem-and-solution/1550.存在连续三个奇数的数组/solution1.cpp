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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size=arr.size();
        for (int i=2;i<size;++i)
        {
            if (arr.at(i)%2!=0 && arr.at(i-1)%2!=0 && arr.at(i-2)%2!=0)
                return true;
        }
        return false;
    }
};
