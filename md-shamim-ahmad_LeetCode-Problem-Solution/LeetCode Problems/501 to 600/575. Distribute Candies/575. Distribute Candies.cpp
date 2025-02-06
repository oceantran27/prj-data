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
    int distributeCandies(vector<int> &candyType) {
        set<int> st;
        for (auto it: candyType)
            st.insert(it);
        int n = candyType.size();
        candyType.clear();
        if (n / 2 > st.size())
            return st.size();
        else
            return n / 2;
    }
};