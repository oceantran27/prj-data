#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Time: O(N log 3), Space: O(3)
#include <vector>
#include <queue>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < array.size(); i++) {
		if (pq.size() < 3) {
			pq.emplace(array[i]);
		} else {
			if (array[i] > pq.top()) {
				pq.pop();
				pq.emplace(array[i]);
			}
		}
	}
	vector<int> result;
	while (!pq.empty()) {
		result.push_back(pq.top());
		pq.pop();
	}
	return result;
}
