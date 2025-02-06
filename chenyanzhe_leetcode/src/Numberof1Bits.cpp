#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "Numberof1Bits.hpp"

int Numberof1Bits::hammingWeight(uint32_t n) {
    int ret = 0;
    while (n) {
        n &= (n - 1);
        ret++;
    }
    return ret;
}
