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
    void nextPermutation(vector<int> &num) {
        int i = num.size() - 1;
        while (i >= 1 && num[i-1] >= num[i]) {
            i--;
        }
        if (i == 0) {
            reverse(num.begin(), num.end());
            return;
        }
        for (int j = num.size() - 1; j >= i; j--) {
            if (num[j] > num[i-1]) {
                swap(num[j], num[i-1]);
                break;
            }
        }
        reverse(num.begin() + i, num.end());
    }
};
