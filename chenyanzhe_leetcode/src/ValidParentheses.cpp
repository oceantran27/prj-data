#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "ValidParentheses.hpp"

#include <stack>

using namespace std;

bool ValidParentheses::isValid(string s) {
    stack<char> st;

    for (auto c : s) {
        if (c == '(' || c == '{' || c == '[')
            st.push(c);
        else {
            if (st.empty())
                return false;
            else if (c == ')' && st.top() != '(')
                return false;
            else if (c == '}' && st.top() != '{')
                return false;
            else if (c == ']' && st.top() != '[')
                return false;

            st.pop();
        }
    }

    return st.empty();
}