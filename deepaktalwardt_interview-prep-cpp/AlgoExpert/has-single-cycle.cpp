#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

bool hasSingleCycle(vector<int> array) {
  // Write your code here.
	int n = array.size();
	int numElementsVisited = 0;
	int idx = 0;
	while (numElementsVisited < n) {
		if (numElementsVisited > 0 && idx == 0) return false;
		numElementsVisited++;
		idx += array[idx];
		idx = idx % n;
		if (idx < 0) {
			idx = n + idx;
		}
	}
	return idx == 0;
}