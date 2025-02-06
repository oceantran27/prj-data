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
    bool isOneEditDistance(string s, string t) {
        int diff = abs((int)s.size() - (int)t.size());
        if(diff > 1) return false;
        int distance = 0;
        if(diff == 0){
            for(int i = 0; i < s.size(); i++) if(s[i] != t[i]) distance++;
        }
        else{
            int i = 0, j = 0;
            while(i < s.size() && j < t.size()){
                if(s[i] != t[j]){
                    s.size() > t.size() ? i++ : j++;
                    distance++;
                }
                else i++, j++;
            }
            if(i != s.size() || j != t.size()) distance++;
        }
        return distance == 1;
    }
};
