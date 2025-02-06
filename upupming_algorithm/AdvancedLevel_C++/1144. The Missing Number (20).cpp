#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n, a, num = 0;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a]++;
    }
    while(++num)
        if (m[num] == 0) break;
    cout << num;
    return 0;
}