#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        // assumed c is the max size
        // case1: a+b > c
        // => (a+b-c)//2 + c = (a+b+c)//2 < a+b
        // case2: a+b <= c
        // => a+b <= (a+b+c)//2
        return min((a + b + c) / 2, a + b + c - max({a, b, c})); 
    }
};
