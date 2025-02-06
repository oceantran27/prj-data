#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "GuessNumberHigherOrLower.hpp"

GuessNumberHigherOrLower::GuessNumberHigherOrLower(GuessHint g)
        : guess(g) {
}

int GuessNumberHigherOrLower::guessNumber(int n) {
    int l = 1, r = n;

    while (l <= r) {
        int m = l + (r - l) / 2;
        int hint = guess(m);
        if (hint == 0)
            return m;
        else if (hint > 0)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}