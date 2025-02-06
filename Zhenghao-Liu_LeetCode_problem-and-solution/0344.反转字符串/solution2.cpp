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
        int left=0,right=s.size()-1;
        while (left<right)
        {
            if (s.at(left)!=s.at(right))
                swap(s.at(left),s.at(right));
            ++left;
            --right;
        }
    }
};
