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
    bool checkZeroOnes(string s) {
        int one=0,zero=0;
        int sz=s.size();
        for (int i=0;i<sz;) {
            int cnt=0;
            char ii=s.at(i);
            int j=i;
            for (j=i;j<sz && s.at(j)==ii;j++);
            if (ii=='0') {
                zero=max(zero,j-i);
            } else {
                one=max(one,j-i);
            }
            i=j;
        }
        return one>zero;
    }
};