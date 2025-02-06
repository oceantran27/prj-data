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
    int prefixCount(vector<string> &words, string pref)
    {
        int count = 0;
        for (const string &word : words)
        {
            // Check if the prefix matches the start of the word
            if (word.substr(0, pref.size()) == pref)
            {
                count++;
            }
        }
        return count;
    }
};
