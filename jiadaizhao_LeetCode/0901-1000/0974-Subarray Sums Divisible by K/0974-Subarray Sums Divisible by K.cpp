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
    int subarraysDivByK(vector<int>& A, int K) {
        vector<int> table(1 + K);
        table[0] = 1;
        int sum = 0, count = 0;
        for (int a : A) {
            sum = (sum + a % K + K) % K;
            count += table[sum]++;
        }
        return count;
    }
};
