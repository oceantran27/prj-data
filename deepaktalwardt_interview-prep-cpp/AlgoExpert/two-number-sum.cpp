#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	for (int elem : array) {
		for (int elem2 : array) {
			if (elem2 == (targetSum - elem)) {
				return vector<int> {std::min(elem, elem2), std::max(elem, elem2)};
			}
		}
	}
	return vector<int> {};
}