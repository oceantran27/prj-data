#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n^2)
// Space: O(n)

class Solution {
public:
    string orderlyQueue(string S, int K) {
        if (K == 1) {
            auto result{S};
            for (int i = 1; i < S.length(); ++i) {
                result = min(result, S.substr(i) + S.substr(0, i));
            }
            return result;
        }
        sort(S.begin(), S.end());
        return S;
    }
};
