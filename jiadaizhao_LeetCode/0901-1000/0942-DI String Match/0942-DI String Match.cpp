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
    vector<int> diStringMatch(string S) {
        int N = S.size();
        vector<int> result(1 + N);
        int left = 0, right = N;
        for (int i = 0; i < N; ++i) {
            if (S[i] == 'I') {
                result[i] = left++;
            }
            else {
                result[i] = right--;
            }
        }
        result.back() = left;
        return result;
    }
};
