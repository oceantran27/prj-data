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
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1; i <= n; i++)
            q.push(i);
        while (q.size() > 1){
            int rem = k-1;
            while (rem--){
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }
        return q.front();
    }
};