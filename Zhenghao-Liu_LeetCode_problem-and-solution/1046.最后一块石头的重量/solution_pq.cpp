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
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>,less<int>> pq;
        for (int i:stones) {
            pq.push(i);
        }
        while (pq.size()>1) {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if (x!=y) {
                pq.push(y-x);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
