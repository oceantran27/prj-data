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
    int a, b, c;
    cin >> a >> b >> c;
    if(b > c) swap(b, c);
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    cout << a << "->" << b << "->" << c;
    return 0;
}