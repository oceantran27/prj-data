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
    string reverseString(string s) {
        int begin = 0, end = s.size() - 1;
        while(begin < end){
            swap(s[begin++], s[end--]);
        }
        return s;
    }
};