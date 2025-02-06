#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

void print (int c) {
    if (c >= 1000) {
        print(c / 1000);
        cout << "," << setfill('0') << setw(3)  << c % 1000;
    }
    else cout << c % 1000;
}

int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    if (c < 0) {
        cout << "-";
        c = -c;
    }
    print(c);
    return 0;
}