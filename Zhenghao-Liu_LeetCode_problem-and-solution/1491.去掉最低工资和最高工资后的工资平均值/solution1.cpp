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
    double average(vector<int>& salary) {
        int max_s=INT_MIN;
        int min_s=INT_MAX;
        for (int i:salary)
        {
            max_s=max(max_s,i);
            min_s=min(min_s,i);
        }
        int sum=0;
        for (int i:salary)
            if (i!=max_s && i!=min_s)
                sum+=i;
        int n=salary.size()-2;
        return double(sum)/n;
    }
};
