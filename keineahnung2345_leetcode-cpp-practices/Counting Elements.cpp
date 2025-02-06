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
    int countElements(vector<int>& arr) {
        map<int, int> counter;
        
        for(int e : arr){
            counter[e]++;
        }
        
        int ans = 0;
        
        for(auto it = counter.begin(); it != counter.end(); it++){
            //for current key k, k+1 also exists
            if(next(it) != counter.end() && next(it)->first == it->first+1){
                ans += it->second;
            }
        }
        
        return ans;
    }
};
