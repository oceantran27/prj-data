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
    string truncateSentence(string s, int k) {
        string ans;
        int cnt=0;
        int sz=s.size();
        for (char i:s) {
            if (i==' ') {
                cnt++;
            }
            if (cnt==k) {
                break;
            }
            ans+=i;
        }
        return ans;
    }
};