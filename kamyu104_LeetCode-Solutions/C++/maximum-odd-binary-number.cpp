#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// greedy, partition, in-place
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int left = 0;
        for (int i = 0; i < size(s); ++i) {
            if (s[i] == '1') {
                swap(s[i], s[left++]);
            }
        }
        if (s.back() != '1') {
            swap(s.back(), s[left - 1]);
        }
        return s;
    }
};
