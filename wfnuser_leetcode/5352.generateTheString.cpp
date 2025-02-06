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
    string generateTheString(int n) {
        string ans = "";
        if (n % 2 == 1) {
            for (int i = 0; i < n; i++) ans += 'a';
        } else {
            for (int i = 0; i < n - 1; i++) ans += 'b';
            ans += 'a';
        }
        
        return ans;
    }
};