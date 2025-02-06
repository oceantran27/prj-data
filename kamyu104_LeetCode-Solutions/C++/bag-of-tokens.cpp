#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(), tokens.end());
        int result = 0, points = 0;
        int left = 0, right = tokens.size() - 1;
        while (left <= right) {
            if (P >= tokens[left]) {
                P -= tokens[left++];
                result = max(result, ++points);
            } else if (points > 0) {
                --points;
                P += tokens[right--];
            } else {
                break;
            }
        }
        return result;
    }
};
