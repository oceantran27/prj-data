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
    bool isValidSerialization(string preorder) {
        string token;
        istringstream iss(preorder);
        getline(iss, token, ',');
        int m = 0, n = 0;
        while(!token.empty()){
            if(token == "#") m++;
            else n++;
            token.clear();
            getline(iss, token, ',');
            if(m == n + 1){
                if(token.empty()) return true;
                else return false;
            }
        }
        return false;
    }
};
