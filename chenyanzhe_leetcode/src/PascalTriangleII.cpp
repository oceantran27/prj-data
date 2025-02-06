#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "PascalTriangleII.hpp"

vector<int> PascalTriangleII::getRow(int rowIndex) {
    vector<int> r(rowIndex + 1, 0);
    r[0] = 1;

    for (int i = 1; i < rowIndex + 1; i++)
        for (int j = i; j >= 1; j--)
            r[j] += r[j - 1];

    return r;
}
