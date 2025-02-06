#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <any>
#include <vector>

using namespace std;

int productSumHelper(vector<any> array, int level) {
  // Write your code here.
	int result = 0;
	for (auto e : array) {
		if (e.type() == typeid(vector<any>)){
			result += productSumHelper(any_cast<vector<any>>(e), level + 1);
		} else {
			result += any_cast<int>(e);
		}
	}
	return result * level;
}

int productSum(vector<any> array) {
	return productSumHelper(array, 1);
}
