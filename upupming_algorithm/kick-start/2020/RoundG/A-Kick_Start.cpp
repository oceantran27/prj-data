#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int t;
string s;

int solve() {
    int n = s.length();
    int k = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (s.substr(i, 4) == "KICK") k++;
        if (s.substr(i, 5) == "START") ans += k;
    }
    return ans;
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        printf("Case #%d: %d\n", i, solve());
    }
    return 0;
}
