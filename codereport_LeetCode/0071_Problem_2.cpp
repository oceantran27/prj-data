#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
// code_report Solution
// https://youtu.be/fl0Q4dbcDNM?t=1m22s

#include <unordered_map>
#include <numeric>

using namespace std;

int numRabbits (vector<int>& a) {
	unordered_map<int, double> m;
	for (int i = 0; i < a.size (); i++) m[a[i] + 1]++;
	int res = 0;
	for (auto e : m) res += ceil (e.second / e.first) * e.first;
	return res;
}

int numRabbits2 (vector<int>& a) {
	unordered_map<int, double> m;
	for (int i = 0; i < a.size (); i++) m[a[i] + 1]++;
	auto bunnies = [] (int v, const pair<int, double>& p) { return v + ceil (p.second / p.first) * p.first; };
	return accumulate (m.begin (), m.end (), 0, bunnies);
}
