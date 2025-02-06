#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int valid(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 4 == 0;
}
int n;
int main() {
    cin >> n;
    while (!valid(n)) n++;
    cout << n << endl;
    return 0;
}
