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
    int countLetters(string S) {
        int total = 0, start = 0;
        for (int i = 0; i <= S.size(); ++i) {
            if (i == S.size() || S[i] != S[start]) {
                total += (i - start) * (i - start + 1) / 2;
                start = i;
            }
        }
        
        return total;
    }
};
