#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/reverse-only-letters/description/
/// Author : liuyubobobo
/// Time   : 2018-10-06

#include <iostream>
#include <stack>

using namespace std;


/// Using Stack
/// Time Complexity: O(n)
/// Space Complexity: O(n)
class Solution {
public:
    string reverseOnlyLetters(string S) {

        stack<char> stack;
        for(char c: S)
            if(isalpha(c))
                stack.push(c);

        for(char& c: S)
            if(isalpha(c))
                c = stack.top(), stack.pop();
        return S;
    }
};


int main() {

    return 0;
}