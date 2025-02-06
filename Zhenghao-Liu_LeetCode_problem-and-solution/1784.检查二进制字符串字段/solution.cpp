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
    bool checkOnesSegment(string s) {
        bool flag=true;
        for (int i=0;i<s.size();i++) {
            if (!flag && s.at(i)=='1') {
                return false;
            }
            if (flag && s.at(i)=='1') {
                int j=i+1;
                for (;j<s.size();j++) {
                    if (s.at(j)=='0') {
                        break;
                    }
                }
                i=j;
                flag=false;
            }
        }
        return true;
    }
};
