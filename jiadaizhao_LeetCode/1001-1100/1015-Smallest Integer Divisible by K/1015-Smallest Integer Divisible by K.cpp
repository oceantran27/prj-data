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
    int smallestRepunitDivByK(int K) {
        if (K % 2 == 0 || K % 5 == 0) {
            return -1;
        }

        int curr = 0;
        for (int i = 1; i <= K; ++i) {
            curr = (curr * 10 + 1) % K;
            if (curr == 0) {
                return i;
            }
        }

        return -1;
    }
};
