#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i = 1, j = n, &&mid = 0;
        while (i <= j) {
            mid = i + (j - i) / 2;
            if (isBadVersion(mid))
                j = mid - 1;
            else
                i = mid + 1;
        }
        return i;
    }
};
