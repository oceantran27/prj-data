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
    string removeOccurrences(string s, string part) {
        while (true) {
            int pos=s.find(part);
            if (pos==string::npos) {
                break;
            }
            s.erase(pos,part.size());
        }
        return s;
    }
};