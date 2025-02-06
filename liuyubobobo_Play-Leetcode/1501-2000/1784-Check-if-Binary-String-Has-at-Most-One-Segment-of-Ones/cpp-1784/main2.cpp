#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
/// Author : liuyubobobo
/// Time   : 2021-03-06

#include <iostream>
#include <vector>

using namespace std;


/// No "01" since there's no leading zeros
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    bool checkOnesSegment(string s) {

        return s.find("01") == string::npos;
    }
};


int main() {

    return 0;
}
