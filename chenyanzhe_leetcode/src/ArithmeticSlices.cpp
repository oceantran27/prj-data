#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "ArithmeticSlices.hpp"

int ArithmeticSlices::numberOfArithmeticSlices(vector<int> &A) {
    int res = 0, len = 2;

    for (int i = 2; i < A.size(); i++) {
        if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
            len++;
        } else {
            if (len > 2) res += (len - 1) * (len - 2) / 2;
            len = 2;
        }
    }

    if (len > 2) res += (len - 1) * (len - 2) / 2;

    return res;
}
