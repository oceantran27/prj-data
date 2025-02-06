#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int secondHighest(string s) {
        set<int> st;
        for (auto& c : s) {
            if (isdigit(c)) st.insert(c - '0');
        }
        if (st.size() <= 1) return -1;
        auto it = st.end();
        it--, it--;
        return *it;
    }
};
