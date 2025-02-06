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
    int numSubarraysWithSum(vector<int>& A, int S) {
        vector<int> table(1 + A.size());
        table[0] = 1;
        int curr = 0, count = 0;
        for (int a : A) {
            curr += a;
            if (curr >= S) {
                count += table[curr - S];
            }           
            ++table[curr];
        }
        return count;
    }
};
