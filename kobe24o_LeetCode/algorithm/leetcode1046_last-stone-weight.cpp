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
        priority_queue<int> q(stones.begin(),stones.end());
        int x, y;
        while(q.size() > 1)
        {
        	y = q.top();
        	q.pop();
        	x = q.top();
        	q.pop();
        	if(x != y)
        		q.push(y-x);
        }
        if(q.size() == 0)
        	return 0;
        return q.top();
    }
};