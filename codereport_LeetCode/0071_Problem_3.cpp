#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
// code_report Solution
// https://youtu.be/fl0Q4dbcDNM?t=5m4s

#include <algorithm>

using namespace std;

bool reachingPoints (int sx, int sy, int tx, int ty) {

	while (sx != tx || sy != ty) {

		if (tx < sx || ty < sy) return false;

		if (tx > ty) tx -= max ((tx - sx) / ty, 1) * ty;
		else         ty -= max ((ty - sy) / tx, 1) * tx;
	}

	return true;
}
