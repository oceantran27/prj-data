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
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int count = 0;
        while(getline(ss,word,' '))
        {
            if(word.size()!=0)
                count++;
        }
        return count;
    }
};