#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class KthLargest {
	int K;
	priority_queue<int,vector<int>,greater<int>> q;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(int i:nums)
        	add(i);
    }
    
    int add(int val) {
        if(q.size() < K)
        	q.push(val);
        else
        {
        	if(val > q.top())
        	{
        		q.pop();
        		q.push(val);
        	}
        }
        return q.top();
    }
};