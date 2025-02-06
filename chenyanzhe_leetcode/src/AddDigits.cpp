#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "AddDigits.hpp"

int AddDigits::addDigits(int num) {
    return 1 + (num - 1) % 9;
}