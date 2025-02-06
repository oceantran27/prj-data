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
    int numDistinct(string S, string T) {
        vector<int> l;
        int n = S.size(), m = T.size();
        l.resize(m+1);
        l[0] = 1;
        for (int i = 1; i<=n; i++){
            for (int j = m; j>0; j--){
                if (S[i-1] == T[j-1]){
                    l[j] += l[j-1];
                }
            }
        }
        return l[m];
    }
};
