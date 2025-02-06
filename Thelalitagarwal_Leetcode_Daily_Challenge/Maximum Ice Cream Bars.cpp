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
    int maxIceCream(vector<int>& A, int coins) {
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size(); ++i)
            if ((coins -= A[i]) < 0)
                return i;
        return A.size();
    }
};