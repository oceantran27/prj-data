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
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        return a[1]<b[1];
    }
public:
    int scheduleCourse(vector<vector<int>>& courses) 
    {
        sort(courses.begin(),courses.end(),cmp);
        priority_queue<int>pq;
        
        int cur = 0;
        for (int i=0; i<courses.size(); i++)
        {
            pq.push(courses[i][0]);
            cur += courses[i][0];
            
            if (cur>courses[i][1])
            {
                cur -= pq.top();
                pq.pop();
            }            
        }
        return pq.size();
    }
};
