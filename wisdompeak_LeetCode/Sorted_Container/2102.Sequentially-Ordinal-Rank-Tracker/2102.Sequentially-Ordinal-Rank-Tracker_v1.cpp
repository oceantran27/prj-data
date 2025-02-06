#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class SORTracker {
    set<pair<int,string>>Set;
    set<pair<int,string>>::iterator iter;
public:
    SORTracker() 
    {
        Set.insert({INT_MIN, ""});
        iter = Set.begin();
    }
    
    void add(string name, int score) 
    {
        Set.insert({-score, name});
        if (make_pair(-score, name) < *iter)
            iter = prev(iter);
    }
    
    string get() 
    {
        iter = next(iter);
        return iter->second;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */
