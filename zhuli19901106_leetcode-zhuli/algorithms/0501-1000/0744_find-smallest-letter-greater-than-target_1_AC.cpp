#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

// easy
#include <algorithm>
#include <vector>
using std::upper_bound;
using std::vector;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
		auto &a = letters;
		int n = a.size();
		int i = upper_bound(a.begin(), a.end(), target) - a.begin();
		if (i == n) {
			i = 0;
		}
		return a[i];
    }
};
