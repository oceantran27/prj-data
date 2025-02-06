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
    string replaceDigits(string s) {
        int sz=s.size();
        for (int i=1;i<sz;i+=2) {
            s.at(i)=s.at(i-1)+(s.at(i)-'0');
        }
        return s;
    }
};