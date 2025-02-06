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
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> table;
        for (string email : emails) {
            auto it = email.begin();
            bool ignore = false;
            string s;
            for (; *it != '@'; ++it) {
                char c = *it;
                if (c == '.') {
                    continue;
                }
                if (c == '+') {
                    ignore = true;
                }
                
                if (!ignore) {
                    s += c;
                }
            }
            
            s.append(it, email.end());
            table.insert(s);
        }
        return table.size();
    }
};
