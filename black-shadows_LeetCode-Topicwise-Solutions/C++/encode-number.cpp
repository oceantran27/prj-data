#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    string encode(int num) {
        string result;
        while (num) {
            result.push_back((num % 2) ? '0' : '1');
            num = (num - 1) / 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
