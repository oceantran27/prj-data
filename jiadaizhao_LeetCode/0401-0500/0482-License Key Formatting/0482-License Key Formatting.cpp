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
    string licenseKeyFormatting(string S, int K) {
        string result;
        int j = 0;
        for (int i = S.size() - 1; i >= 0; --i) {
            if (S[i] != '-') {
                if (j == K) {
                    result += '-';
                    j = 0;
                }
                
                result += toupper(S[i]);
                ++j;
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
