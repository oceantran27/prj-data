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
    int minOperations(vector<string>& logs) {
        int x=0;
        for(auto c: logs){
            if(c=="../") x=max(0, x-1);
            else if(c=="./") continue;
            else x++;
        }
        
        return x;
    }
};