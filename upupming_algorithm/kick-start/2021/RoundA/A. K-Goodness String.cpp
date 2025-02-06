#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int t, n, k;
string s;

int solve() {
    int good = 0;
    for (int i = 0, j = n - 1; i <= j; i++, j--) {
        if (s[i] != s[j]) good++;
    }
    return abs(k - good);
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> k;
        cin >> s;
        printf("Case #%d: %d\n", i, solve());
    }
    return 0;
}
