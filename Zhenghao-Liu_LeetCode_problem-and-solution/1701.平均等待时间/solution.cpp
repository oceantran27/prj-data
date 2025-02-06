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
    double averageWaitingTime(vector<vector<int>>& customers) {
        int size=customers.size();
        double ans=0;
        int cur=0;
        for (vector<int> &i:customers) {
            int arr=i.at(0);
            int tim=i.at(1);
            if (arr>=cur) {
                ans+=tim;
                cur=arr+tim;
            } else {
                ans+=cur+tim-arr;
                cur+=tim;
            }
        }
        return ans/size;
    }
};
