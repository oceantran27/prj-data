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
    int distributeCandies(vector<int>& candies) {
        int ans = 1, i = 1, n = candies.size();
        
        if(n == 0){
            return 0;
        }
        
        sort(candies.begin(), candies.end());
        
        while(i < n && (ans != n/2)){
            if(candies[i] != candies[i-1]){
                ans++;
            }
            i++;
        }
        
        return ans;
    }
};
