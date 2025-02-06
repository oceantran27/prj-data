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
	int a;
	cin >> a;
	int b = (a + 2 > 7) ? (a - 5) : (a + 2);
	cout << b;
	return 0;
}