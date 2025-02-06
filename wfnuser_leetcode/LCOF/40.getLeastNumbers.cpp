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
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        priority_queue<int> pq;
        vector<int> ans;
        if (k == 0) return ans;

        for (int i = 0; i < arr.size(); i++) {
            if (pq.size() < k) {
                pq.push(arr[i]);
            } else {
                if (arr[i] < pq.top()) {
                    pq.push(arr[i]);
                    pq.pop();
                } 
            }
        }

        while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};