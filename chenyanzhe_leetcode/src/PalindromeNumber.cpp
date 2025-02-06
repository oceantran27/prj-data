#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "PalindromeNumber.hpp"

bool PalindromeNumber::isPalindrome(int x) {
    if (x < 0)
        return false;

    int p = x;
    int q = 0;

    while (p >= 10) {
        q *= 10;
        q += p % 10;
        p /= 10;
    }

    return q == x / 10 && p == x % 10;
}
