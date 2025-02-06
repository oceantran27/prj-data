#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "ExcelSheetColumnNumber.hpp"

int ExcelSheetColumnNumber::titleToNumber(string s) {
    int result = 0;

    for (auto c : s)
        result = result * 26 + (c - 'A' + 1);

    return result;
}
