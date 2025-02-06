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
    int minimumTimeToInitialState(string word, int k) 
    {
        int t=1;
        int n = word.size();
        char* s = &(word[0]);
        while (t*k<n && memcmp(s, s+t*k, n-t*k)!=0)
            t++;
        return t;
    }
};
