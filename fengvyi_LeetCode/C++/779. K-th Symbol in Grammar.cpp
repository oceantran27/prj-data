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
        return N == 1 ? 0 : kthGrammar(N - 1, (K + 1) / 2) ? K % 2 : !(K % 2);
    }
};
