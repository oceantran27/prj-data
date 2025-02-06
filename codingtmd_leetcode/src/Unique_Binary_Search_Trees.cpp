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

    int numTrees(int n) {
        vector<int> count(n + 1, 0);
        count[0] = 1;
        count[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                count[i] += count[j] * count[i - j - 1];
            }
        }
        return count[n];
    }
};