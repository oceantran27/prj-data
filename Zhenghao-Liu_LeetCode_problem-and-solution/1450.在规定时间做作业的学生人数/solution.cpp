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
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int> helper(1001,0);
        int size=startTime.size();
        for (int i=0;i<size;++i)
            for (int j=startTime[i];j<=endTime[i];++j)
                ++helper[j];
        return helper.at(queryTime);
    }
};
