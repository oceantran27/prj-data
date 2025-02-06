#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	string reverseString(string s) {
		reverse(s.begin(), s.end());
		return s;
	}
};