#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string alpha;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (isalnum(*it))
            {
                alpha.push_back(tolower(*it));
            }
        }
        string r(alpha);
        reverse(r.begin(), r.end());
        return alpha == r;
    }
};
