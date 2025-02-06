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
    void reverseString(vector<char>& s) {
        if(s.size() ==0 || s.size() == 1)
            return;
        int beg =0, end = s.size()-1;
        char temp;
        while(end>beg)
        {
            temp = s[beg];
            s[beg]= s[end];
            s[end] = temp;
            beg++;
            end--;
        }
    }
};
