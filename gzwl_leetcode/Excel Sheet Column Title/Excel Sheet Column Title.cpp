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
    string convertToTitle(int n) {
        string s;
        while(n){
            int t = n-1;
            t %= 26;
            char c = t + 'A';
            s += c;
            n = (n-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

