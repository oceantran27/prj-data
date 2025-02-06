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
    bool isPalindrome(string s) {
        
        int start = 0;
        int end = (int)(s.size() - 1);

        while (start < end)
        {
            while (start < end && !isalnum(s[start]))
            {
                start++;
            }

            while (start < end && !isalnum(s[end]))
            {
                end--;
            }

            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
