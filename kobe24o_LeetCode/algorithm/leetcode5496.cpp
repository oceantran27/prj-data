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
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(), piles.rend());
        int i = 1, s = 0, n = piles.size()/3;
        while(n--)
        {
            s += piles[i];
            i += 2;
        }
        return s;
    }
};