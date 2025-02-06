#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

  bool isHappy(int n) {
	if (n == 1) return true;
	else if (n == 4) return false;
	else return isHappy(digitSqSum(n));
}	
