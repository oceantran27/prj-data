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
    string orderlyQueue(string S, int K) {
        if (K > 1) {
            sort(S.begin(), S.end());
            return S;
        }
        
        string minS = S;
        for (int i = 1; i < S.size(); ++i) {
            minS = min(minS, S.substr(i) + S.substr(0, i));
        }
        return minS;
    }
};
