#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time complexity -: O(log(n))
// space complexity -: O(n)

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        priority_queue<int>pq; // O(n)

        for(int i = 0; i < piles.size(); i++) 
        {
            pq.push(piles[i]);
        }

        while(k != 0)         
        {
            int val = pq.top();
            pq.pop();
            pq.push(val - floor(val/2));
            k--;
        }

        int ans = 0;
        while(!pq.empty())  
        { 
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};