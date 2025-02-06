#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
辗转相除法
*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int n, a, b;
int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
    return 0;
}
