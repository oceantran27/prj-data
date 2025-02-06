#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    bool isPerfectSquare(int num) {
        int ll = 1;
        int rr = num;
        int mm;
        while (rr - ll > 1) {
            mm = ll + (rr - ll >> 1);
            if (mm <= num / mm) {
                ll = mm;
            } else {
                rr = mm;
            }
        }
        return ll * ll == num;
    }
};
