#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int t, h, m;
int main() {
    cin >> t;
    while (t--) {
        int ans = 0;
        cin >> h >> m;
        ans = (60 - m) + (24 - (h + 1)) * 60;
        cout << ans << endl;
    }
    return 0;
}
