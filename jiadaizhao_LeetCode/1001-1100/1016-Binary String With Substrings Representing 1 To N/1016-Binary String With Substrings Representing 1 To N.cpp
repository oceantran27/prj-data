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
    bool queryString(string S, int N) {
        if (N > S.size() * 2) {
            return false;
        }

        int curr = N;
        while (curr > N / 2) {
            int temp = curr;
            string bs;
            while (temp) {
                bs += '0' + temp % 2;
                temp >>= 1;
            }
            reverse(bs.begin(), bs.end());
            if (S.find(bs) == string::npos) {
                return false;
            }
            --curr;
        }

        return true;
    }
};
