#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/percentage-of-letter-in-string/
/// Author : liuyubobobo
/// Time   : 2022-05-21

#include <iostream>

using namespace std;


/// Brute Force
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    int percentageLetter(string s, char letter) {

        int k = 0;
        for(char c: s) k += c == letter;

        return k * 100 / s.size();
    }
};


int main() {

    return 0;
}
