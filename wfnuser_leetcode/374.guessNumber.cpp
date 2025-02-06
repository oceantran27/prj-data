#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int r = n;

        while(l < r) {
            int mid = l + (r-l)/2;

            if (guess(mid) == 0) return mid;

            if (guess(mid) < 0) {
                r = mid;
            } else {
                l = mid+1;
            }
        }

        return l;
    }
};