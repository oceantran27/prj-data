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
    string entityParser(string text) {
        stringstream res;
        int n = text.size(), i = 0;
        unordered_map<string, char> entity = {
            {"&quot", '\"'},
            {"&apos", '\''},
            {"&gt", '>'},
            {"&lt", '<'},
            {"&frasl", '/'}, 
            {"&amp", '&'},
        };
        
        while (i < n) {
            if (text[i] == '&') {
                stringstream t;
                while (text[i] != ';') {
                    t << text[i++];
                }
                
                string cur = t.str();
                if (entity.count(cur)) res << entity[cur];
                else res << cur << ";";
            } else res << text[i];
            i++;
        }
        return res.str();
    }
};