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
        int n=stones.size();
        priority_queue<int> pq;
        for(auto &x: stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int p=pq.top();
            pq.pop();
            int q=pq.top();
            pq.pop();
            if(p!=q){
                int x=abs(p-q);
                pq.push(x);
            }
        }
        int v=0;
        if(!pq.empty())
            v=pq.top();
        return v;
    }
};