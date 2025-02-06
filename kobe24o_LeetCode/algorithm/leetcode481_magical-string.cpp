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
    int magicalString(int n) {
        string s("122");
        int i = 2;
        while(s.size() < n)
        {
        	s += string(s[i]-'0', s.back()^3);
        	++i;
        }
        return count(s.begin(),s.begin()+n,'1');
    }
};