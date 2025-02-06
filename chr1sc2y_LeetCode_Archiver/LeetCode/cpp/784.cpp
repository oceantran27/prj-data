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
    vector<string> letterCasePermutation(string S) {
        size = S.size();
        insert(S, 0);
        return ret;
    }
    
    void insert(string S, int sub) {
        if(sub == size) {
            ret.insert(ret.end(), S);
            return;
        }
        insert(S, sub + 1);
        if(S[sub] >= 'a' && S[sub] <= 'z') {
            S[sub] = toupper(S[sub]);
            insert(S, sub + 1);
        }
        else if(S[sub] >= 'A' && S[sub] <= 'Z') {
            S[sub] = tolower(S[sub]);
            insert(S, sub + 1);
        }
    }
private:
    int size;
    vector<string> ret;
};