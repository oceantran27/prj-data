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
    string reverseOnlyLetters(string S) {
        int l = 0;
        int r = S.size() - 1;

        while(l < r) {
            while (!(S[l] <= 122 && S[l] >= 97 || S[l] <= 90 && S[l] >=65) && l < r) {
                l++;
            }
            while (!(S[r] <= 122 && S[r] >= 97 || S[r] <= 90 && S[r] >=65) && l < r) {
                r--;
            }
            char tmp = S[l];
            S[l] = S[r];
            S[r] = tmp;
            l++;
            r--;
        }
        
        return S;
    }
};