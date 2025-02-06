#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include <vector>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n <= 0) return false;
		if ((n&(n - 1)) == 0) return true;
		return false;
	}
};