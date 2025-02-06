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
    string reverseStr(string s, int k) {
        int s_size=s.size();
        for (int i=0;i<s_size;i+=2*k)
            reverse(s.begin()+i,s.begin()+min(s_size,i+k));
        return s;
    }
};
