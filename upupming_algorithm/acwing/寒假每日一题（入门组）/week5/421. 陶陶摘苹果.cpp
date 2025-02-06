#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
const int N = 10;
int a[N], x, ans;
int main() {
    for (int i = 0; i < N; i++) cin >> a[i];
    cin >> x;
    for (int i = 0; i < N; i++)
        if (x + 30 >= a[i]) ans++;
    cout << ans << endl;
    return 0;
}