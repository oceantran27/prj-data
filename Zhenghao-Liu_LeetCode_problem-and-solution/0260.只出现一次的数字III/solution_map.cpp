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
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int &i:nums)
            if (m.count(i)==0)
                ++m[i];
            else
                m.erase(m.find(i));
        vector<int> answer;
        for (auto &i:m)
            answer.push_back(i.first);
        return answer;
    }
};
