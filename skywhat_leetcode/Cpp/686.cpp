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
    int repeatedStringMatch(string A, string B) {
        string repeated = A;
        int k = B.size()/A.size() + 2;
        for(int i=1;i<=k;++i){
            int res = repeated.find(B);
            if(res != string::npos){
                return i;
            }
            repeated += A;
        }
        
        return -1;
    }
};
