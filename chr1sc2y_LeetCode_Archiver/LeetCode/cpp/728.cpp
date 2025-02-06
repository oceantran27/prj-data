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
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for (int &num = left; num <= right; ++num) {
            int i = num;
            while (i > 0) {
                int j = i % 10;
                if (j == 0 || num % j != 0)
                    break;
                i /= 10;
            }
            if (i == 0)
                ret.push_back(num);
        }
        return ret;
    }
};
