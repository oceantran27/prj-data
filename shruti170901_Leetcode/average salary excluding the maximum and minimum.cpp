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
        double sum;
        int n=salary.size();
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++)sum+=salary[i];
        sum/=(n-2);
        return sum;
    }
};
