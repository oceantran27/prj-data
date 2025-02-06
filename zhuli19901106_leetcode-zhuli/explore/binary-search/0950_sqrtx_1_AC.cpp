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
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int ll = 1;
        int rr = x;
        int mm;
        while (rr - ll > 1) {
            mm = ll + (rr - ll >> 1);
            if (mm <= x / mm) {
                ll = mm;
            } else {
                rr = mm;
            }
        }
        return ll;
    }
};
