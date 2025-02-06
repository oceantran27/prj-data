#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "FirstBadVersion.hpp"

#include <cstdint>

using namespace std;

FirstBadVersion::FirstBadVersion(VersionChecker checker)
        : isBadVersion(checker) {
}

int FirstBadVersion::firstBadVersion(int n) {
    int l = 1, r = n;
    while (l + 1 < r) {
        int m = l + (r - l) / 2;
        if (isBadVersion(m))
            r = m;
        else
            l = m;
    }

    if (isBadVersion(l))
        return l;
    if (isBadVersion(r))
        return r;
    return -1;
}
