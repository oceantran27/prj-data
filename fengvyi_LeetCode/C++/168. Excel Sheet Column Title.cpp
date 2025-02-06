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
        string res;
        char c;
        while(n){
            c = 'A' + (n - 1) % 26;
            res = c + res;
            n = (n - 1) / 26;
        }
        return res;
    }
};

// Or
class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n){
            res.push_back('A' + (n - 1)%26);
            n = (n - 1) / 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
