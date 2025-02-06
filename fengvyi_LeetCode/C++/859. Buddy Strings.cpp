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
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size()) return false;
        int n = A.size(), pos = -1;
        vector<int>count(26);
        bool repeat = false, swaped = false;
        for(int i = 0; i < n; i++){
            if(A[i] != B[i]){
                if(pos == -1) pos = i;
                else if(swaped || A[pos] != B[i] || A[i] != B[pos]) return false;
                else swaped = true;
            }
            if(++count[A[i] - 'a'] > 1) repeat = true;
        }
        return swaped || repeat;
    }
};
