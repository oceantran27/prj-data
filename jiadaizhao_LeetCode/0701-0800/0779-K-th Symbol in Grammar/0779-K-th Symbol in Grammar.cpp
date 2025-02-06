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
    int kthGrammar(int N, int K) {
        if (N == 1) return 0;
        int prev = kthGrammar(N - 1, (K + 1) / 2);
        return (K & 1) ^ prev ? 0 : 1;
    }
};

class Solution {
public:
    int kthGrammar(int N, int K) {
        --K;
        int count = 0;
        while (K) {
            ++count;
            K &= K - 1;
        }
        return count & 1;
    }
};
