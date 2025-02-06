#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class TimeMap {
public:
    unordered_map<string,map<int,string>> m;
    TimeMap() {
        
        
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].insert({ timestamp, value });
        
    }
    
    string get(string key, int timestamp) {
        
     
        
       auto it = m[key].upper_bound(timestamp);
  return it == m[key].begin() ? "" : prev(it)->second;
        
    }
};

