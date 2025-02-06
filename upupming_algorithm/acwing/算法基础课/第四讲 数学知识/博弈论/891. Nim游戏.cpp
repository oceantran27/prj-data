#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int n, a, s;
int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        s ^= a;
    }
    if (s == 0) {
        puts("No");
    } else {
        puts("Yes");
    }
    return 0;
}
