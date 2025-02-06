#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int time[1002]={0}, n=s.size(), i;
        for(i=0;i<n;i++){
            time[s[i]]+=1;
            time[e[i]+1]-=1;
        }
        for(i=1;i<=1000;i++){
            time[i]+=time[i-1];
        }
        return time[q];
    }
};