#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Time: O(ND) Space O(N)
#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  // Write your code here.
	vector<int> ways(n + 1, 0);
	ways[0] = 1;
	for (int d : denoms) {
		for (int amount = 1; amount < ways.size(); amount++) {
			if (d <= amount) {
				ways[amount] += ways[amount - d];
			}
		}
	}
	return ways[ways.size() - 1];