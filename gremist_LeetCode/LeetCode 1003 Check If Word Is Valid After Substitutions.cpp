#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 1003 Check If Word Is Valid After Substitutions.cpp

class Solution {
public:
    bool isValid(string S) {
        if (S.size() % 3) return false;
        stack<char> st;
        for (char ch : S) {
            if (ch == 'c') {
                if (st.empty() || st.top() != 'b') {
                    return false;
                }
                st.pop();
                if (st.empty() || st.top() != 'a') {
                    return false;
                }
                st.pop();
            } else {
                st.push(ch);
            }
        }
        return st.empty();
    }
};