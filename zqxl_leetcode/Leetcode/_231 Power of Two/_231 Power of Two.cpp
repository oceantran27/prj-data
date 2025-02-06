#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>
#include<malloc.h>
#include<string>
#include<math.h>

bool isPowerOfTwo(int n) {
	while (n != 0) {
		if (n & 1) {
			if (n >> 1 == 0)
				return true;
			else
				return false;
		}
		else {
			n = n >> 1;
		}
	}
	return false;
}

/*λ*/
bool isPowerOfTwo(int n) {
	if (n <= 0)
		return false;
	if ((n&n - 1) == 0)
		return true;
	return false;
}

