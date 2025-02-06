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
        int start = 0, end = (int)(S.size()) - 1;
        while (start < end) {
            while (start < end && !isalpha(S[start])) {
                ++start;
            }
            
            while (start < end && !isalpha(S[end])) {
                --end;
            }
            
            if (start < end) {
                swap(S[start++], S[end--]);
            }                     
        }
        return S;
    }
};
