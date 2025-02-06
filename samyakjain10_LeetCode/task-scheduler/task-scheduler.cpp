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
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        
        int maxFreq = 0;
        
        for(char ch: tasks){
            freq[ch]++;
            maxFreq = max(freq[ch], maxFreq);
        }
        
        int ans = (n+1)*(maxFreq-1);
        
        for(auto it: freq){
            if(it.second == maxFreq) ans++;
        }
        
        return max((int)tasks.size(), ans);
    }
};