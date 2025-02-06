#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int n;
int main() {
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << abs(i - j) + 1 << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}