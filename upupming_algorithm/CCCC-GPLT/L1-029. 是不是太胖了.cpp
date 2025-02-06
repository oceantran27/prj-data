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
	float height;
	cin >> height;
	float ans = (height - 100) * 0.9 * 2;
	printf("%.1f", ans);
	return 0;
}