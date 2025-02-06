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

bool isHappy(int n) {
	int qu[4096] = { 0 };
	int qs = 0;
	while (n != 1) {
		int m = 0;
		while (n) {
			m += (n % 10)*(n % 10);
			n /= 10;
		}
		for (int i = 0; i < qs; i++) {
			if (m == qu[i]) return false;
		}
		qu[qs++] = m;
		n = m;
	}
	return true;
}

int main() {
	isHappy(7);
	return 0;
}

