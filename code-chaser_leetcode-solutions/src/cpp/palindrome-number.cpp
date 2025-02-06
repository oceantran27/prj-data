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
    bool isPalindrome(int x) {
            string s = to_string(x);
            int start = 0;
            int end = s.length() - 1;

            while(start < end)
            {
                if(s[start++] != s[end--])
                    return false;
            }

            return true;
        }
};

// Submission- https://leetcode.com/submissions/detail/814241551/
