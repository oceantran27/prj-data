#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "WaterAndJugProblem.hpp"

bool WaterAndJugProblem::canMeasureWater(int x, int y, int z) {
    if (x + y < z) return false;
    if (x == z || y == z || x + y == z) return true;
    return z % gcd(x, y) == 0;
}

int WaterAndJugProblem::gcd(int x, int y) {
    while (y) {
        int t = y;
        y = x % y;
        x = t;
    }
    return x;
}