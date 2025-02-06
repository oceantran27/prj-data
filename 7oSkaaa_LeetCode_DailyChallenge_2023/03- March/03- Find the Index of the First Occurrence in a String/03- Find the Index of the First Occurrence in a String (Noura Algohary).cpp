#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Noura Algohary
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0;i<haystack.size();i++)
        {
            if(haystack[i] == needle[0])
                if(haystack.substr(i, needle.size()) == needle)
                    return i;
        }

        return -1;
    }
};