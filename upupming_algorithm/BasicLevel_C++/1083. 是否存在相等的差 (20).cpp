#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, t, a[10000] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        a[abs(t-i)]++;
    }
    for (int i = 9999; i >= 0; i--)
        if (a[i] >= 2) cout << i << " " << a[i] << endl;
    return 0;
}