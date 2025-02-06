#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "FactorialTrailingZeroes.hpp"

int FactorialTrailingZeroes::trailingZeroes(int n) {
    int result = 0;

    while (n)
        result += (n /= 5);

    return result;
}
